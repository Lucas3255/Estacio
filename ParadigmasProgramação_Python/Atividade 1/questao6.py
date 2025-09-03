''' 6. Escreva um programa que leia do console os 3 parâmetros
de uma equação de segundo grau do tipo ax^2+bx+c=0 e calcule as
raízes, conforme fluxograma e fórmulas da página seguinte.'''

#bibliotecas importadas
import math, os, time, platform

#função de limpar a tela.
def limpa_Tela():
    if platform.system().lower() == "windows":
        os.system("cls")
    else:
        os.system("clear")

#loop principal, para manter funcionando até o usuário não querer mais.
while True: 
    limpa_Tela()
    print("\n=== Calculadora de Equação do Segundo Grau ===")
    print("Formato: ax² + bx + c = 0\n")

    try:    #Garante q o usuário digite apenas números.
        a = float(input("Valor de a: "))
        b = float(input("Valor de b: "))
        c = float(input("Valor de c: "))
    except ValueError:
        print("\nErro! Digite apenas números.")
        time.sleep(2)
        continue

    if a == 0:  #Garante que a equação exista.
        print(f"\nEquação: {b}x + {c} = 0 (não é do 2º grau!)")
        print('Erro! "a" não pode ser zero!')
        pass
    else:   #Se for verdadeira, o calculo é feito.
        print(f"\nEquação: {a}x² + {b}x + {c} = 0")
        delta = b**2 - 4*a*c
        print(f"Delta: {delta}")

        if delta < 0:
            print("\nNão existem raízes reais!")
        elif delta == 0:
            raiz = -b / (2*a)
            print(f"\nRaiz única: x = {raiz:.2f}")
        else:
            raiz1 = (-b + math.sqrt(delta)) / (2*a)
            raiz2 = (-b - math.sqrt(delta)) / (2*a)

            print(f"\nx1 = {raiz1:.2f}")
            print(f"x2 = {raiz2:.2f}")

    print("\n" + "-" * 40)

    while True: #loop para saber se o usuário deseja fazer outro calculo.
        try:
            escolha = input("\nGostaria de tentar de novo?\n1. Sim\n2. Não.\n\n >> ")

            if escolha == "1":
                break
            elif escolha == "2":
                print("\nPrograma Encerrado!")
                exit()
            else:
                limpa_Tela()
                print(f'\n... A opção "{escolha}" é inválida!')
                time.sleep(1)
                input("\nClique Enter para continuar.")

        except ValueError:
            limpa_Tela()
            print(f'\n... A opção "{escolha}" é inválida!')
            time.sleep(1)
            input("\nClique Enter para continuar.")

