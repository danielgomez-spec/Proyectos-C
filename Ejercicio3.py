#3. Genere 2 arreglos paralelos que representen las sucursales de una empresa y sus ventas.
#  Existen 25 sucursales en la empresa. Presente el promedio de ventas, así como las sucursales
#  con ventas mayores al promedio. 
import time
inicio = time.time()

sucursales = list(range(1, 26))
ventas = [1000 + (i * 50) for i in range(25)] 

promedio = sum(ventas) / len(ventas)

print(f"Promedio de ventas: {promedio}")
print("Sucursales con ventas mayores al promedio:")

for i in range(25):
    if ventas[i] > promedio:
        print(f"Sucursal: {sucursales[i]} - Venta: {ventas[i]}")

fin = time.time()
print(f"Tiempo de ejecucion Python: {fin - inicio:.6f} segundos")