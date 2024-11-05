#fatorial de um número digitado pelo usuário
n = int(input("digite um número: ")) #lendo o número
f = 1 #fatorial inicial
for c in range(n, 0, -1): #iniciando o loop
    f *= c #fatorial 
print(f) #imprimindo o fatorial