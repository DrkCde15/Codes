import math #biblioteca matematica

def numPrimo(num):
    if(num % 2 ) == 0 and num > 2:
        return 'Nao eh primo'
    for i in range(3, int(math.sqrt(num)) + 1, 2):
        if num % i == 0:
            return 'Nao eh primo'
    return 'Eh primo'

print(numPrimo(int(input("Digite um numero: "))))

txt = input("Digite um texto: ")
def lowerCase(str):
    return str.lower()

print(lowerCase(txt))