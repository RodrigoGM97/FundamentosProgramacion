#include <stdio.h>
#include <math.h>

float formula (float v_2, float c_2, float t, float f, float v, float c);

float formula (float v_2, float c_2, float t, float f, float v, float c)
{
 v_2 = v * v;
 c_2 = 90000000000;
 
 t = 1-(v/c_2);
 
 f = sqrt(t);

 return t;
}

int main ()
{
  float v_2;
  float c_2;
  float t;
  float f;
  float v;
  float c;
  float p;
  
  p = t*100;
  
  printf ("Con este programa podrás saber qué tanto se alentará tu reloj si viajas a una velocidad cercana a la velocidad de la luz.\nIngresa la velocidad a la que piensas viajar (km/s):\n");
  scanf ("%f", &v);
  
  printf ("Tu reloj avanzaría a un %f de lo que avanza un reloj real.", p);
  
  
}