notas = []

for i in range(10):
    nota = float(input(f"Digite a nota do {i + 1}º aluno: "))
    notas.append(nota)

media = sum(notas) / len(notas)
print("A média da turma é: {:.2f}".format(media))