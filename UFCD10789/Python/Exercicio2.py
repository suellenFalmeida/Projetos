numeros = []

for i in range(10):
    num = int(input(f"Digite o {i + 1}º número: "))
    numeros.append(num)

print("Números pares:")
for num in numeros:
    if num % 2 == 0:
        print(num)

print("Números ímpares:")
for num in numeros:
    if num % 2 != 0:
        print(num)