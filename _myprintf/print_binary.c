#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n = 10;
	while (n >= 0)
	{
		printf("%d",n%2);
		n = n / 2;
	}
	return (0);
}
