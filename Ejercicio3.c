/*3. Genere 2 arreglos paralelos que representen las sucursales de una empresa y sus ventas. 
Existen 25 sucursales en la empresa. Presente el promedio de ventas, así como las sucursales
 con ventas mayores al promedio. 
 Hecho por sebastian Gómez */
#include <stdio.h>
#include <time.h>

int main() {
    int sucursales[25];
    float ventas[25], suma = 0, promedio;
    clock_t inicio, fin;

    inicio = clock();

    for (int i = 0; i < 25; i++) {
        sucursales[i] = i + 1;
        ventas[i] = 1000 + (i * 50); 
        suma += ventas[i];
    }

    promedio = suma / 25;
    printf("Promedio de ventas: %.2f\n", promedio);
    printf("Sucursales con ventas mayores al promedio:\n");

    for (int i = 0; i < 25; i++) {
        if (ventas[i] > promedio) {
            printf("Sucursal ID: %d - Venta: %.2f\n", sucursales[i], ventas[i]);
        }
    }

    fin = clock();
    printf("Tiempo de ejecucion C: %f segundos\n", (double)(fin - inicio) / CLOCKS_PER_SEC);
    return 0;
}