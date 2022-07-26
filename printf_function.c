#include <stdio.h>
#include <string.h>
#include <stdarg.h>
int no(unsigned int a, const char form,void *new);
int _printf(const char*format,...);
int main()
{
	char *ho = "ingley";
	char* nom = "i";
	_printf("%d",ho,nom,78);
	return 0;
}
/* this is the printf function */
int _printf(const char *format,...){
	int a ;
	char y;
	char * c;
	va_list args;
	va_start(args,format);
	for (int i =0; i<strlen(format); i++)
	{
		if (*(format + i)=='%')
		{
		        switch (*(format +i+i))
			{
			case 'd':
				a = va_arg(args,int);
				printf("%d",a);
				break;
			case 'c':
				a  = va_arg(args, int);
				printf("%c",a);
				break;
			case 's':
				c = va_arg(args, char *);
				printf("%s",c);
				break;

			}
		

		}
	
	}

	return 0;
}

/* this is a subsidiary function that does more work */

