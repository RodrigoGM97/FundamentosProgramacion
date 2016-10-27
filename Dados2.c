#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int dados;
	int i;
	int arreglo[6] = {1,2,3,4,5,6};
	int cont=0;

	

	srand ( time(NULL));

	printf("Cara \t Frecuencia \n");

	for (i=0;i<6000;i++)
	{
		dados = rand() % 6;	

		arreglo[dados] = arreglo[dados]+1;
		
	}
	
	printf("1 \t %d  \n", arreglo[0]);
	printf("2 \t %d  \n", arreglo[1]);
	printf("3 \t %d  \n", arreglo[2]);
	printf("4 \t %d  \n", arreglo[3]);
	printf("5 \t %d  \n", arreglo[4]);
	printf("6 \t %d  \n", arreglo[5]);

	return 0;


}