#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int arr[20] = {};
	int i;
	int n;
	int cont = 0;

	srand (time(NULL));

	for (i=0;i<19;i++)
	{
		arr[i] = rand() % 100 + 1;
		printf ("%d \t", arr[i]);
	}

	printf ("Escribe un numero: \n");
	scanf ("%d", &n);

	for (i=0;i<19;i++)
	{
		if (arr[i]==n)
			{
				cont++;
			}
		else if (arr[i] != n)
		{
			cont = cont;
		}

	}

	printf ("El numero %d se repite %d veces en el arreglo", n, cont);	

	return 0;
}