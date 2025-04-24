numero = int(input("Digite um número: "))
soma = 0
subtracao = 0
multiplicacao = 1
divisao = 1
operacoes = 0

for i in range(1, numero):
    soma += i
    subtracao -= i
    multiplicacao *= i
    if i != 0:
        divisao /= i
    operacoes += 4

print(f"Soma: {soma}")
print(f"Subtração: {subtracao}")
print(f"Multiplicação: {multiplicacao}")
print(f"Divisão: {divisao}")
print(f"Total de operações: {operacoes}")