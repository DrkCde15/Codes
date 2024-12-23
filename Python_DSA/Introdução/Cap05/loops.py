#loop for com tupla
tp = (2, 3, 4)
for i in tp:
    print(i)

    
#for com lista de strings
tp = ["Daniele", "Larissa", "Mayara"]
for i in tp:
    print(i)
    
#for com lista de inteiros
tp = [2, 3, 4]
for i in tp:
    print(i)

#for com dicionario
tp = {"Afonso": 19, "Alice": 20, "Caio": 21}
for i in tp:
    print(i, tp[i])

#for com range
#range: é uma funcao que cria uma sequencia de numeros inteiros
for i in range(0,11):
    print(i)
    
#for com lista e if
tp = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
for i in tp:
    if i % 2 == 0:
        print(i)

#for in range com passos de 2 em 2
for i in range(0,103, 2):
    print(i)

#for caracter de uma string
for i in "Kali Linux":
    print(i)
    

#loop for aninhado
lst_1 = [0, 1, 2, 3]
lst_2 = [1, 2, 3]
for i in lst_1:
    for j in lst_2:
        print('\n', i * j)

    print('-------')
    
#loop for aninhado com if
lst_1 = [0, 1, 2, 3]
lst_2 = [1, 2, 3]
for i in lst_1:
    for j in lst_2:
        if i == 3 and j == 3:
            print("Encontrei o número 3 nas duas listas")

#loop for com condicionais
list_1 = [10, 73, 13, 22, 36, 42]
list_2 = [1, 2, 3, 4, 5, 6, 7, 8]
soma = 0

for list in [list_1, list_2]:
    for num in list:
        if num % 2 == 0:
            soma += num 

print(soma)

# listas concatenadas
list_1 = [10, 73, 13, 22, 36, 42]
list_2 = [1, 2, 3, 4, 5, 6, 7, 8]
list_3 = list_1 + list_2
print(list_3)


#While
valor = 0
while valor < 10:
    print(valor)
    valor += 1

#while com else
valor = 0
while valor < 20:
    print("valor x é: ", valor)
    print("valor ainda eh menor que 20")
    valor += 1
else:
    print("fim do loop")
    
    
#pass, break e continue com while
valor = 0
while valor < 10:
    if valor == 5:
        break
    else:
        pass
    print(valor)
    valor += 1
    
for letra in "Linux zzz eh melhor":
    if letra == "z":
        continue
    print(letra)
    


#numeros primos de 1 a 100 com for e while
num = 2
while num < 100:
    for i in range(2, num):
        if num % i == 0:
            break
    else:
        print(num)
    num += 1