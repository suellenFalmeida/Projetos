contador = 0

for n in range(1, 10001):
    soma = 0
    for i in range(1, n):
        if n % i == 0:
            soma += i
    if soma == n:
        contador += 1

print(f"Existem {contador} números perfeitos entre 1 e 10000.")