#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *r;
	int t;
	int n = 2;
	int w = 1;
	int *e;
	int j;
	int *m;
	int h;
	int i;
	int k;
	
	printf("Tamaño de arreglo; \n");
	scanf("%d", &t);
	r = malloc(t*sizeof(int));
	e = malloc(t*sizeof(int));
	m = malloc(t*sizeof(int));

	for (i=0;i<t;i++)
	{
	e[i] = w;
	w = w+1;
	printf("%d", e[i]);
	}

	for (k=0;k<t;k++)
	{
	r[k] = n;
	n = n+2;
	printf("%d", r[k]);
	}

	for (j=0;j<t;j++)
	{
		if (j==t)
			{
				m[0] = e[t-1] * r[0];
			}

		else if (j<t)
			{
				m[j+1] = (e[j]) * (r[j+1]);
			}
	}

	for (h=0;h<t;h++)
	{
		m[0] = e[t-1] * 2;
		printf("\n %d \n", m[h]);
	}

	return 0;

}