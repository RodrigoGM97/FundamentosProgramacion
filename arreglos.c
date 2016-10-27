#include <stdio.h>
#define TAMANIO 5

int main()
{
	const var = 5;
	int arreglo[TAMANIO] = {1,2,3,4,5};
	int i=0;

	for (i=0;i<TAMANIO;i++)
		printf("%d", arreglo[i]);

	return 0;
}