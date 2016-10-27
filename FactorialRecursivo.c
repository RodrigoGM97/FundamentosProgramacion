#include<stdio.h>
 
long factorial(int);
 
int main()
{
  int n;
  long f;
 
  printf("Ingrese el entero del que desea calcular el factorial\n");
  scanf("%d", &n); 
 

    f = factorial(n);
    printf("%d! = %ld\n", n, f);
  
 
  return 0;
}
 
long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}