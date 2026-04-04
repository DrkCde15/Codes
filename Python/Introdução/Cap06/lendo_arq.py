arq1 = open('arquivos/arquivo1.txt', 'r') #abrir arquivo para a leitura
print(arq1.read()) #ler arquivo
print(arq1.tell()) #contar quantos caracteres
print(arq1.seek(0, 0)) #posicionar o cursor
print(arq1.read(23))#ler 23 caracteres
print(arq1.read())#ler o restante
print(arq1.seek(0, 0))#posicionar o cursor
print(arq1.read())#ler o restante