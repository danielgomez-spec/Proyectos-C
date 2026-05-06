# Ingresar 10 valores por teclado. Presentar la suma y promedio
import time
inicio=time.time()
suma=0
for i in range (1,11):
    print("Ingrese el valor número",i)
    a= int(input())
    suma= suma+a
    promedio=suma/i    

print("El total de la suma de los ",i," números ingresados es: ",suma)
print("El promedio total de los ",i," números ingresados es: ",promedio)
fin=time.time ()
tiempoTotal=fin-inicio
print(f"\nTiempo de ejecución del programa : {tiempoTotal:.6f} segundos")