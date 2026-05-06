# Generar 500 valores aleatorios entre 50 y 100. Presente cuantos valores pares y cuántos impares fueron generados
import random
import time

inicio = time.time()
pares = 0
impares = 0

for i in range(500):
    num = random.randint(50, 100)
    if num % 2 == 0:
        pares += 1
    else:
        impares += 1

fin = time.time()
print("Cantidad de numeros pares: ", pares);
print("Cantidad de numeros impares: ", impares);
print(f"Tiempo de ejecución Python: {fin - inicio:.6f} segundos")