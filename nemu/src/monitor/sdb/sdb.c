#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdbool.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
	nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","Single step execution", cmd_si},
  { "info","Print register state", cmd_info},
  { "x", "Scan memory", cmd_x},

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_x(char *args){
//	char *arg1 = strtok(NULL, " ");
//	char *arg2 = strtok(NULL, " ");
//	int len;
//	vaddr_t addr;
	
//	sscanf(arg1, "%d", &len);
//	sscanf(arg2, "%lx", &addr);
	
//	printf("0x%lx", addr);

	int len;
	vaddr_t addr; 
	sscanf(args, "%d, %lx", &len, &addr);
	
	word_t vaddr_read(vaddr_t addr, int len);//

	for(int i = 0; i<len; i++ ){
//		printf("0x%08lx ", addr);
		printf("0x%08lx \n", vaddr_read(addr, 4));
		addr+=4;
	}
	return 0;
}


//error
static int cmd_info(char *args){
	char *arg = strtok(NULL, " ");//get r/w  register/monitor
	if(arg == NULL){
		printf("Error:	Please input info r or info w for print rigisters or monitor. \n" );
		return 0;
	}
	else if( strcmp(arg, "r") == 0 ){
		isa_reg_display();
	}
	else if( strcmp(arg, "w") == 0 ){
		printf("wait me code. \n");
		return 0;
	}
	else{
		printf("Error:	Please add r/w after info. \n");
		return 0;
	}
	return 0;
}


static int cmd_si(char *args){
	char *arg = strtok(NULL, " ");//use NULL to get N, first useing "strtok" is for cmd "si"
	int steps = 0;
	if(arg == NULL){
		cpu_exec(1); //no input , default N = 1
		return 0;
	}

	sscanf(arg, "%d", &steps);// char -> int
	// if(steps<0 || steps>9){		//AMX_INSTR_TO_PRINT=10
	// 	printf("Error, steps is wrong!\n");
	// 	return 0;
	// }
	cpu_exec(steps);
	return 0;
}


static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
 init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
