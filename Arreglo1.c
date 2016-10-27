#include <stdio.h>
#define a 15


int funcion (int arr[], int c);

int main ()
{
	int arr[a] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int c = 0;
	funcion (arr, c);
	return 0;
}


int funcion (int arr[], int c)
{
	for (c=0;c<a;c++)
	{
		printf ("%d \n", arr[c]);
	}
}

