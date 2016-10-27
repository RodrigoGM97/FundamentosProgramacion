#include <stdio.h>
#define a 20


int funcion (int arr[], int c, int n, int cont);

int main ()
{
	int arr[a] = {5,2,3,3,5,5,5,8,9,10,11,11,11,11,5,243,4, 243,87,2};
	int c = 0;
	int n;
	int cont = 0;
	funcion (arr, c, n, cont);
	return 0;

}


int funcion (int arr[], int c, int n, int cont)
{
	printf ("Ingresa numero \n");
	scanf ("%d", &n);
	for (c=0;c<a;c++)
	{
		if (arr[c]==n)
			{
				cont = cont + 1;
			}
	}
	printf ("El numero %d se repite %d veces", n, cont);
}

