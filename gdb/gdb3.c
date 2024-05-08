// gdb3.c
#include<stdio.h>

long fattoriale(int n)
{
	long result = 1;
	while (n)
		result*=(n--);

 	return result;
}


int main()
{
	int n = 10;

	long val = fattoriale(n);

	printf("Fattoriale di %d, %ld\n", n, val);

	return 0;
}