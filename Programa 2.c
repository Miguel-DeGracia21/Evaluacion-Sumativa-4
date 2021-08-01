/* Miguel De Gracia 8-970-1395 */

/*Elaborar una aplicación de línea de comandos en C que calcule el promedio de las ventas diarias (lunes a viernes) de los tres vendedores que tiene la empresa NASA (Nutrición Animal S.A.).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

const int VEND = 3; //Cantidad de vendedores
const int DIA = 5;  //Cantidad de dia de la semana (Lunes-Vienes

int main()
{
  float mat[VEND][DIA];
  float totVent[VEND];
  float prom;
  int i, j;
  float Total;
  printf ("\t\t\tNutricion Animal S.A.\t\t\t\n");
  // Leemos los valores tecleados por el usuario
  for (i=0;i<VEND;i++)
  { 
     printf("Vendedor %i \n",i+1);
     Total = 0; 
     for (j=0;j<DIA;j++)
     {   
        printf("Dia %i: ",j+1);
        scanf("%f", & mat[i][j]);
        Total += mat[i][j]; // Podemos ir calculando el total de cada vendedor en este mismo ciclo   
     }
     totVent[i]= Total;
     printf ("\n");
  }
  
  
  // Mostramos en pantalla el total de ventas de cada vendedor 
  for (i=0;i<VEND;i++)
  {
     printf("El total de ventas del vendedor %i es: %.2f \n",i+1,totVent[i]);
  prom=prom+totVent[i]/15;   
  }
  
printf ("\n El promedio total de las ventas es de %.2f \n",prom);

  system("PAUSE"); 
  return 0;    
}
