nomes = []
op = True

while op:
    print("\n1 - Introduzir nomes\n2 - Listar Nomes\n3 - Parar Programa")
    resp = input("\nIntroduza a opcao: ")

    if resp == "1":
        nomes.append(input("Introduza um novo nome: "))        
    elif resp == "2":
        for nome in nomes:
            print(f"+ {nome}")
    elif resp == "3":
        print("Adeus!")
        op = False