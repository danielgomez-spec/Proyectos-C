// Generar 500 valores aleatorios entre 50 y 100. Presente cuantos valores pares y cuántos impares fueron generados
//Hecho por sebastian Gómez
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pares = 0, impares = 0, numero;
    clock_t inicio, fin;

    srand(time(NULL)); 
    inicio = clock();

    for (int i = 0; i < 500; i++) {
        numero = rand() % 51 + 50; 
        if (numero % 2 == 0) {
            pares++; } 
            else {
            impares++;}
    }

    fin = clock();
    printf("Cantidad de numeros pares: %d\n", pares);
    printf("Cantidad de numeros impares: %d\n", impares);
    printf("Tiempo de respuesta C: %f segundos\n", (double)(fin - inicio) / CLOCKS_PER_SEC);

    return 0;
}