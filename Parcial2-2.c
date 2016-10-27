#include <stdio.h>

int main()
{

	int f=5;
	int c=5;
	int e;
	int l;

 
	int arr[c][f];
	int i;

	for (i=0;i<f-1;i++)
	{
		arr[i][i] = 0;
	}

	for (int j=0;j<f-1;j++)
	{
		printf ("%d \n", arr[j][j]);
		for (int k=0;k<c;k++)
		{
			printf("%d ", arr[k][k]);
		}
	}

	int a;
	printf("Cuales asientos quieres apartar?\n");
	scanf("%d", &a);

	while (e!=0)
	{
		printf("Fila:\n");
		scanf("%d", &e);
		printf("Columna:");
		scanf("%d", &l);
		arr[e][l] = 1;

	}

		for (int j=0;j<f-1;j++)
	{
		printf ("%d \n", arr[j][j]);
		for (int k=0;k<c;k++)
		{
			printf("%d ", arr[k][k]);
		}
	}

	return 0;

}