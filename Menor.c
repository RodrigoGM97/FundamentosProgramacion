#include <stdio.h>

int funcion (int num1, int num2, int numerr);

int main ()
{
	int num1;
	int num2;
	int numerr;

	printf("El numero mas chico es: %d \n", funcion(num1, num2, numerr));

}

int funcion (int num1, int num2, int numerr)
{
	while (num1>=0)
	{
		printf("Introduce el numero: \n");
		scanf("%d",&num1);



		if (num1<=-1)
		{
			numerr = num1;
		}

		else if ((num1<num2)&(num1>=0)&(num2>=0))
		{
			num2=num1;
		}
		else if ((num1>num2)&(num1>=0)&(num2>=0))
		{
			num1=num2;
		}
	}
	return num2;
}