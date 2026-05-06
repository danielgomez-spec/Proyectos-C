#include <stdio.h>
#include <time.h>
int main(){
    clock_t start =  clock();
    int a=10;
    int b=20;

    int suma= a+b;
    printf("La suma de a y b es: %d\n ", suma);
    clock_t end =  clock();
   double time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion C: %0.05f segundos\n", time);
    return 0;
}