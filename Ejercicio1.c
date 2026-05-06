//Ingresar 10 valores por teclado. Presentar la suma y promedio
//Hecho por sebastian Gómez
#include <stdio.h>
#include <time.h>
int main(){
 int a, suma=0,i;
 double promedio, tiempoTotal;
 clock_t inicio, fin;
    
 inicio= clock();
 for ( i=1 ; i<=10; i++) {
  printf("Ingrese el numero %d:", i);
  scanf("%d", &a);
  suma= suma+a;}
  promedio=(double)suma/i;
 printf("El total de la suma es: %d\n", suma);
 printf("El promedio total es: %.2f\n", promedio);
 fin=clock();
 tiempoTotal = (double)(fin - inicio) / CLOCKS_PER_SEC;
 printf("Tiempo de respuesta del programa: %f segundos\n", tiempoTotal);
 return 0;
}