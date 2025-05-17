def primeiraFunc():
    print("hello world")
primeiraFunc()

def segundaFunc():
    nome = input("Digite seu nome: ")
    print("Ola " + nome)
segundaFunc()

def terceiraFunc():
    nome = input("Digite seu nome: ")
    idade = input("Digite sua idade: ")
    print("Ola " + nome + " e voce tem " + idade + " anos")
terceiraFunc()

def imprimeNum():
    for i in range(0, 10):
        print("numero: " + str(i))
imprimeNum()

def imprimeNumPares():
    for i in range(0, 100, 2):
        print("numero: " + str(i))
imprimeNumPares()

def imprimeNumImpares():
    for i in range(1, 100, 2):
        print("numero: " + str(i))
imprimeNumImpares()


def addNum(num1, num2):
    print("Primeiro numero: " + str(num1))
    print("Segundo numero: " + str(num2))
    print("Soma: " + str(num1 + num2))
addNum(44, 56)

def varInfo(argv1, *vartuple):
    print ("O parametro passado foi: ", argv1)
    for i in vartuple:
        print ("O parametro passado foi: ", i)
varInfo("Daniele", "Larissa", "Mayara")

def diga_ola(nome):
    print("Olá {}.".format(nome))
diga_ola("May")