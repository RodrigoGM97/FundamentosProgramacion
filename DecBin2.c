#include <stdio.h>
 
int main()
{  
	int a[10],n,i;
  
	printf("Ingresa un decimal: \n");  
	scanf("%d",&n);  
	
	if (n==0)
	{
		printf("El numero en binario es: 0");
	}

	else
	{
	for(i=0;n>0;i++)  
	{  
	a[i]=n%2;  
	n=n/2;  
	}  
	printf("El numero en binario es: ");  

	for(i=i-1;i>=0;i--)  
	{  
	printf("%d",a[i]);  
	}	 	 
	}
	return 0;
} 