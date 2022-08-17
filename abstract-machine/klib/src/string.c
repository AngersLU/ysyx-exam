#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
	const char *sc;

	for(sc = s; *sc != '\0'; ++sc) {  }

	return sc - s;
}
//string
char *strcpy(char *dst, const char *src) { //error if memory overlaps
	char* ret = dst;
	while((*dst++ = *src++) != '\0'){}
	return ret;
}

char *strncpy(char *dst, const char *src, size_t n) {
  char* ret = dst;
	while( n && (*dst++ = *src++) ) {
		n--;
	}
	if(n) {
		*dst = '\0';
	}
	return ret;

}
//string
char *strcat(char *dst, const char *src) {
  char* ret = dst;

	while(*dst) {
		dst++;
	}

	while((*dst++ = *src++) != '\0') {
	}

	return ret;

}
//string
int strcmp(const char *s1, const char *s2) {
	while(*s1 == *s2 ) {
		if(*s1 == '\0' ) {
			return 0;
		}
		s1++;
		s2++;
	}

	return *s1 - *s2;

}

int strncmp(const char *s1, const char *s2, size_t n) {
	for(int i = 0; i < n; i++) {
		if(*(s1 + i) > *(s2 + i))  return 1;
		else if(*(s1 + i) < *(s2 + i) )  return -1;

	  if(*(s1 + i) == 0 || *(s2 + i) == 0) break;
  	}

	return 0;
}

// string
void *memset(void *s, int c, size_t n) {
	char* ret = (char*)s;
	while(n > 0) {
    	*ret++ = c;
		n--;
	}
	return s;

}
// void* memset(void* v,int c,size_t n) {
//   for(int i = 0; i < n;i ++)
//   {
//     ((char*)v)[i] = c; 
//   }
//   return v;
// }
void *memmove(void *dst, const void *src, size_t n) {
  	char* dest = (char*)dst;
	char* source = (char*)src;
	if((dest > source) && (dest < source + n)) {
		while(n--) {
			*(dest + n) = *(dest + n );
		}
	}
	else {
		while(n--) {
		  *dest++ = *source++;
		}
	}
	return dst;

}

void *memcpy(void *out, const void *in, size_t n) {
  	char* dest = (char*)out;
	char* src = (char*)in;
	if(dest <= src) {
		while(n-- > 0) {
			*dest++ = *src++;
		}
	}
	else {
		while(n > 0) {
			*(dest + n - 1) = *(src + n -1);
			n--;
		}
	}
	return out;

}
//string
int memcmp(const void *s1, const void *s2, size_t n) {

	char* src1 = (char*)s1;
	char* src2 = (char*)s2;

	while(n && *src1 && *src2) {
		if(*((unsigned char*)src1) > *((unsigned char*)src2)) {
		  return 1;
		}
		else if(*((unsigned char*)src1) < *((unsigned char*)src2)) {
			return -1;
		}
		else {
			src1++;
			src2++;
			n--;
		}
	}

  if(n ==0 ) {
		return 0;
	}
	if(*src1 ==  '\0') {
		return -1;
	}
  if(*src2 == '\0') return 1;

	return 0;
}

#endif
