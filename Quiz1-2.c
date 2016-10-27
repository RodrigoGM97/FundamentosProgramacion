#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int arr[] = {};
	int i;
	int n;
	int j;
	int *r;
	int t;

	printf("Tamaño de arreglo; \n");
	scanf("%d", &t);
	r = malloc(t*sizeof(int));




	for (i=0;i<t;i++)
	{
	printf ("Escribe un numero para llenar el arreglo: \n");
	scanf ("%d", &n);
	r[i] = n;
	}

	printf ("Los numeros escritos fueron: \n");

	for (j=0;j<t;j++)
	{
		printf ("%d \n", r[j]);
	}

	return 0;
}

// arr[]