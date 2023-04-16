#include "main.h"



int main(int argc, char *argv[])
{
	int a;
	int b;
	int r;

	if (scanf("%d", &a) && scanf("%d", &b))
	{
		printf("%d\n", r = a * b);
		return (r);
	}
	else 
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
