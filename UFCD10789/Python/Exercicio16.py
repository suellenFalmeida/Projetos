numeros = []
while len(numeros) < 30:
    numero = int(input("Digite um número par entre 1 e 50: "))
    if 1 <= numero <= 50 and numero % 2 == 0:
        numeros.append(numero)
    else:
        print("Número inválido. Tente novamente.")

media = sum(numeros) / len(numeros)
print(f"A média dos 30 números pares é: {media}")
