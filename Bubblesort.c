#include <stdio.h>
 
int main()
{
  int arr[100], n, c, d, cam;
 
  printf("Ingresa el numero de datos\n");
  scanf("%d", &n);
 
  printf("Ingresa %d numeros\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1]) /* For decreasing order use < */
      {
        cam       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = cam;
      }
    }
  }
 
  printf("En orden ascendente es:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", arr[c]);
 
  return 0;
}