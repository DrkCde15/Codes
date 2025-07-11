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

def identificar_tipo(valor):
    if valor.lower() == 'true' or valor.lower() == 'false':
        tipo = 'bool'
    elif valor.lstrip('-').isdigit():
        tipo = 'int'
    elif '.' in valor:
        partes = valor.split('.')
        if len(partes) == 2 and (partes[0].lstrip('-').isdigit() and partes[1].isdigit()):
            tipo = 'float'
        else:
            tipo = 'string'
    elif len(valor) == 1:
        tipo = 'char'
    else:
        tipo = 'string'

    return tipo

entrada = input("Digite algo: ")
tipo = identificar_tipo(entrada)
print(f"Tipo identificado: {tipo}")
