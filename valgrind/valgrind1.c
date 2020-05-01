// valgrind1.c
// In questo file ci sono due problemi

#include <stdlib.h>

void f(void)
{
	int* x = malloc(10 * sizeof(int));
	x[10] = 0;
}

int main(void)
{
	f();
	return 0;
}
