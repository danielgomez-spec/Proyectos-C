import time
start = time.perf_counter()
a = 10
b = 20
print("La suma de a + b es:", a + b)
end = time.perf_counter()
print(f"Tiempo de ejecucion Python: {end - start:.05f} segundos")