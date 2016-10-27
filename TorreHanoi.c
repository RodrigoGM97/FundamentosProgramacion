#include <stdio.h>

int juego (int disco, int i, int cont);

int main ()
{
	int disco;
	int i;	
	int cont;
	printf("¿Cuantos bloques quieres?");
	scanf("%d", &disco);

	juego(disco, i, cont);
	


}

int juego (int disco, int i, int cont)
{
	for (i=1;i<=disco;i++)
	{
		printf("Pasa el bloque %d a A, B o C \n", i);
	}


	return 0;
}

