while True:
    for i in range(256):
        print(f"Código: {i}, Caractere: {chr(i)}")
        if (i + 1) % 20 == 0:
            continuar = input("Pressione Enter para continuar ou 's' para sair: ")
            if continuar.lower() == 's':
                break
    else:
        continue
    break