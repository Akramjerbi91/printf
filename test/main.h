#ifndef HEADER_FILE
#define HEADER_FILE
int _printf(const char *format, ...);
typedef struct format
{
	char c;
	char *s;
	char pers;
}format_t;
char write_char(const char c);
#endif
