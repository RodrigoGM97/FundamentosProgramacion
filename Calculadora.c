#include <stdio.h>
#include <math.h>

int sumar (int num_1, int suma, int num_2);
int restar (int num_1, int resta, int num_2);
int multiplicar (int num_1, int multiplicacion, int num_2);
float dividir (float division, int num_1, int num_2);
int modulo (int num_1, int num_2, int residuo);
int potencia (int num_1, int num_2, int pot);

int main ()
{
  int operacion;
  int num_1;
  int num_2;
  int suma;
  int resta;
  int multiplicacion;
  float division;
  int residuo;
  int pot;
  
  printf ("Introduzca el numero de la operacion: \n");
  printf ("1. Suma \n");
  printf ("2. Resta \n");
  printf ("3. Multiplicacion \n");
  printf ("4. Division \n");
  printf ("5. Modulo \n");
  printf ("6. Potencia \n");
  scanf ("%d", &operacion);
  
  if (operacion==1)
  {
    printf ("La suma de los numeros ingresados es: %d \n", sumar (num_1, suma, num_2));
  }
  if (operacion==2)
  {
    printf ("La resta de los numeros ingresados es: %d \n", restar (num_1, resta, num_2));
  }
  if (operacion==3)
  {
     printf ("La multiplicacion de los numeros ingresados es: %d \n", multiplicar (num_1, multiplicacion, num_2));
  }
  if (operacion==4)
  {
     printf ("La division de los numeros ingresados es: %f \n", dividir (division, num_1, num_2));
  }
  if (operacion==5)
  {
     printf ("El residuo de la division es: %d \n", modulo (num_1, num_2, residuo));
  }
  if (operacion==6)
  {
     printf ("El resultado de la potencia es: %d \n", potencia (num_1, num_2, pot));
  }
  
}

int sumar (int num_1, int suma, int num_2)
{

    printf ("Escribe los numeros que deseas sumar \n");  
    scanf ("%d",&num_1);
    printf ("Escribe los numeros que deseas sumar \n");  
    scanf ("%d",&num_2);
    
    suma = num_2 + num_1;
 
  
  return suma;

}
int restar (int num_1, int resta, int num_2)
{

  printf ("Escribe los numeros que deseas restar \n");  
  scanf ("%d",&num_1);
  printf ("Escribe los numeros que deseas restar \n");  
  scanf ("%d",&num_2);
  resta = num_1 - num_2;
  
  return resta;
}

int multiplicar (int num_1, int multiplicacion, int num_2)
{

  printf ("Escribe los numeros que deseas multiplicar \n");  
  scanf ("%d",&num_1);
  printf ("Escribe los numeros que deseas multiplicar \n");  
  scanf ("%d",&num_2);
  multiplicacion = num_2 * num_1;
  
  return multiplicacion;
}

float dividir (float division, int num_1, int num_2)
{
  printf ("Ingresa el dividendo: \n");  
  scanf ("%d",&num_1);
  printf ("Ingresa el divisor: \n");
  scanf ("%d",&num_2);
  division = num_1 / num_2;
  return division;
}

int modulo (int num_1, int num_2, int residuo)
{
  printf ("Ingresa el dividendo: \n");  
  scanf ("%d",&num_1);
  printf ("Ingresa el divisor: \n");
  scanf ("%d",&num_2);
  residuo = num_1 % num_2;
  return residuo;
}

int potencia (int num_1, int num_2, int pot)
{
  printf ("Ingresa base: \n");  
  scanf ("%d",&num_1);
  printf ("Ingresa el exponente: \n");
  scanf ("%d",&num_2);
  pot = pow(num_1,num_2);
  return pot; 
}