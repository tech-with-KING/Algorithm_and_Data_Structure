#include <stdio.h>
#include <string.h>
#include <stdarg.h>
int no(unsigned int a, const char form,void *new);
int _printf(const char*format,...);
int main()
{
	_printf("boy%d",10);
	return 0;
}
/* this is the printf function */
int _printf(const char *format,...){
	int a = 0;
	int c = 2+2;
	va_list args;
	va_start(args,format);
	for (int i =0; i<strlen(format); i++)
	{
		if (*(format + i)=='%')
		{
			a+=1;
			no(a,*(format +i+1),&format);
		}
	}

	return 0;
}

/* this is a subsidiary function that does more work */

int no(unsigned int a, const char form,void *new){
	int *h = new;
	switch (form)
	{
		case 'd':
			break;
	}

	return 0;
}
