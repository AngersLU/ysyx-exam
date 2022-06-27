#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void printfor(char *out);
void itoa(unsigned int n, char * buf);     //%d int -> string
void xtoa(unsigned int n, char * buf);     //%x int -> string
void printNum(unsigned long num, int base);  //print NUM
/** void printDeci(int dec);                     //print dec 10 */
/** void printOct(unsigned oct);                 //printf oct 8 */
/** void printHex(unsigned hex);                 //print hex 16 */
/** void printAddr(unsigned long addr);          //print address */
/** void printStr(char *str);                    //print string */
/** void printFloat(double f);                   //print float */

int printf(const char *fmt, ...)
{
  char out[1024];
  memset(out, 0, sizeof(out));

  va_list ap;
  int slen = 0;

  va_start(ap, fmt);
  slen = vsprintf(out, fmt, ap);
  va_end(ap);

  putstr(out);

  return slen;
}

int vsprintf(char *temp, const char *fmt, va_list ap) {
  int count = 0;
	char *s;
  int n;
	char *out = temp;

  char buf[1024];
	char digit[16];

	memset(buf, 0, sizeof(buf));
	memset(digit, 0, sizeof(digit));
//	va_list ap;


	while(*fmt != '\0')
	{
		if(*fmt == '%')
		{
			fmt++;
			switch(*fmt)
			{
				case 'd':
					{
						n = va_arg(ap, int);
						if(n < 0)
						{
							*temp = '-';
							temp++;
							n = -n;
						}
						itoa(n, buf);
						memcpy(temp, buf, strlen(buf));
						temp += strlen(buf);
						break;
					}
				case 'x':
          {
            n = va_arg(ap, int);
            xtoa(n, buf);
            memcpy(temp, buf, strlen(buf));
						temp += strlen(buf);
						break;
          }
        case 's':
					{
						s = va_arg(ap, char *);
						memcpy(temp, s, strlen(s));
						temp +=strlen(s);
						break;
					}
				default:
					break;
			}

	  }
		else
		{
			*temp = *fmt;
      temp++;
      if(*fmt == '\n')
			{

			}
		}
    fmt++;
	}

	count = strlen(out);
  return count;
}


int sprintf(char * str, const char *fmt, ...)
{
    int count = 0;
    char *s;
    int n;

    char buf[65];
    char digit[16];

		memset(buf, 0, sizeof(buf));
		memset(digit, 0, sizeof(digit));

    va_list ap;

    va_start(ap, fmt);

    while(*fmt != '\0')
    {
        if(*fmt == '%')
        {
            fmt++;
            switch(*fmt)
           {
                case 'd': /*int*/
                {
                        n = va_arg(ap, int);
                        if(n < 0)
                        {
                            *str = '-';
                            str++;
                            n = -n;
                        }
                        itoa(n, buf);
                        memcpy(str, buf, strlen(buf));
                        str += strlen(buf);
                        break;
                }
                case 's': /*string*/
                {
                        s = va_arg(ap, char *);
                        memcpy(str, s, strlen(s));
                        str += strlen(s);
                        break;
                }
                default:
                        break;
            }
        }
        else
        {
            *str = *fmt;
            str++;

            if(*fmt == '\n')
            {

            }
        }
        fmt++;
    }

    va_end(ap);
    count = strlen(str);
  	memset(str, 0, sizeof(str));
    return count;
}

void itoa(unsigned int n, char * buf)
{
        int i;

        if(n < 10)
        {
                buf[0] = n + '0';
                buf[1] = '\0';
                return;
        }
        itoa(n / 10, buf);

        for(i=0; buf[i]!='\0'; i++);

        buf[i] = (n % 10) + '0';

        buf[i+1] = '\0';
}

void xtoa(unsigned int n, char * buf){

  int i;

  if(n < 16)
  {
    if(n < 10)
    {
      buf[0] = n + '0';
    }
    else
    {
      buf[0] = n - 10 + 'a';
    }
    buf[1] = '\0';
    //end point
    return;
  }

  xtoa(n / 16, buf);

  for(i = 0; buf[i] != '\0'; i++);
  //bit storage
  if((n % 16) < 10)
  {
    buf[i] = (n % 16) + '0';
  }
  else
  {
    buf[i] = (n % 16) - 10 + 'a';
  }
  buf[i + 1] = '\0';

}

void itox(unsigned int n, char * buf)
{
        int i;

        if(n < 10)
        {
                buf[0] = n + '0';
                buf[1] = '\0';
                return;
        }
        itox(n / 16, buf);

        for(i=0; buf[i]!='\0'; i++);

        buf[i] = (n % 10) + '0';

        buf[i+1] = '\0';
}


int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}




#endif
