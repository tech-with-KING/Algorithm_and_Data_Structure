#include <stdio.h>
#include <string.h>
#include <stdarg.h>
int no(unsigned int a, const char form,void *new);
int _printf(const char*format,...);
int main()
{
	char *ho = "ingley";
	char nom = 'i';
	int nome;
	int n = 50;
	_printf("%d");
	return 0;
}
/* this is the printf function */
int _printf(const char *format,...){
	int a ;
	char b;
	char *c;
	va_list args;
	va_start(args,format);
	for (int i =0; i<strlen(format); i++)
	{
		if (*(format + i)=='%')
		{
			if (*(format +i+1) == 'd')
			{
				a = va_arg(args,int);
			}
			else if (*(format +i+1) == 's')
			{
				c = va_arg(args, char*);
				
			}
			else if (*(format +i+1) == 'x')
			{
				c = va_arg(args, char*);
				
			}
			else if (*(format +i+1) == 'c')
			{
				b = va_arg(args, int);
				
			}
			else if (*(format +i+1) == 'u' && *(format +i+2) == 'l')
			{
				c = va_arg(args, char*);
				
			}
		}
	
	}

	return 0;
}

/* this is a subsidiary function that does more work */


