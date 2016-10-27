#include <stdio.h>

int suma (int T1[][4], int T2[][4], int c, int i, int T3[][4]);

int resta ();

int inversa ();

int main ()
{
	int T1 [][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int T2 [][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int T3 [][4] = {{},{}};
	int c=0;
	int i=0;

	suma(T1,T2,c,i,T3);
	printf ("\n");
	resta (T1,T2,c,i,T3);

	return 0;
}

int suma (int T1[][4], int T2[][4], int c, int i, int T3[][4])
{


	for (c=0;c<4;c++){
		for (i=0;i<4;i++)
		{
			T3 [c][i] = (T1[c][i]) + (T2[c][i]);
			printf ("%d", T3[c][i]);
 
		}
		printf ("\n");
	}

}

int resta (int T1[][4], int T2[][4], int c, int i, int T3[][4])
{
	for (c=0;c<4;c++){
		for (i=0;i<4;i++)
		{
			T3 [c][i] = (T2[c][i]) - (T1[c][i]);
			printf ("%d", T3[c][i]);
 
		}
		printf ("\n");
	}
}
