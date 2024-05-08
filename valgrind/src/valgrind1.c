// valgrind1.c
// In questo file ci sono due problemi

#include <stdlib.h>

void f(void)
{
	int* x = malloc(10 * sizeof(int));
	x[9] = 0; //scrittura in una cella di memoria non allocata
	free(x);
}

int main(void)
{
	f();
	return 0;
}
