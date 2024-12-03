# def primeiraFunc():
#     print("hello world")
# primeiraFunc()

# def segundaFunc():
#     nome = input("Digite seu nome: ")
#     print("Ola " + nome)
# segundaFunc()

# def terceiraFunc():
#     nome = input("Digite seu nome: ")
#     idade = input("Digite sua idade: ")
#     print("Ola " + nome + " e voce tem " + idade + " anos")
# terceiraFunc()

# def imprimeNum():
#     for i in range(0, 10):
#         print("numero: " + str(i))
# imprimeNum()


def imprimeNumPares():
    for i in range(0, 100, 2):
        print("numero: " + str(i))
imprimeNumPares()

def imprimeNumImpares():
    for i in range(1, 100, 2):
        print("numero: " + str(i))

imprimeNumImpares()
