#include <stdio.h>
#define a 15


int funcion (int arr[], int c, int cont);

int main ()
{
	int arr[a] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int c = 0;
	int cont = 0;
	funcion (arr, c, cont);
	return 0;
}


int funcion (int arr[], int c, int cont)
{
	for (c=0;c<a;c++)
	{

		cont = arr[0];

		if (arr[c]>cont)
			cont = arr[c];

	}

	printf ("El mayor numero dentro del arreglo es: %d \n", cont);
}

