#include <stdio.h>

int main ()
{
	int i = 0;

	do {
		printf ("Do while %d \n", i);
		i++;
	}
	while (i <= 5);

	int j =0;

	while (j<=5)
	{
		printf ("While %d \n ", j);
		j++;
	}

	return 0;
}