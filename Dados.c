#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int dados;
	int i;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	

	srand ( time(NULL));

	printf("Cara \t Frecuencia \n");

	for (i=0;i<6000;i++)
	{
		
		dados = rand() % 6 + 1;	


	switch (dados)
	{
		case 1:
			a++;
			break;
			
			
		case 2:
			b++;
			break;
			
		case 3:
			c++;						
			break;
			
		case 4:
			d++;						
			break;
			
		case 5:
			e++;						
			break;
			
		case 6:
			f++;				
			break;
	}	
	}
	
	
	
	printf("1 \t %d  \n", a);
	printf("2 \t %d  \n", b);
	printf("3 \t %d  \n", c);
	printf("4 \t %d  \n", d);
	printf("5 \t %d  \n", e);
	printf("6 \t %d  \n", f);

	return 0;


}