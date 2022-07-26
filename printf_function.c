#include <stdio.h>
#include <string.h>
#include <stdarg.h>
int no(unsigned int a, const char form,void *new);
int _printf(const char*format,...);
int main()
{
	char *ho = "ingley";
	_printf("boy%c%d%d",ho,8-7,78);
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
			switch (*(format +i+i))
			{
			case 'd':;
				int boy = va_arg(args,int);
				printf("%d\n",boy);
			case 'c':;
				char *now = va_arg(args, char *);
				printf("%s\n",now);
			}
		

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
