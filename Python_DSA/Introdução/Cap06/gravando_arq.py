# Criar um arquivo e escrever uma mensagem
with open("arquivos/arquivo3.txt", "w", encoding="utf-8") as arquivo:
    arquivo.write("Ola! Este eh um arquivo gerado com Python.\n")
    arquivo.write("Escreva oque voce quiser.")

print("Arquivo criado com sucesso!")

arq3 = open("arquivos/arquivo3.txt", "r")
print(arq3.read())
print(arq3.read())
arq3.seek(0, 0)
print(arq3.read())
arq3.seek(0, 0)
print(arq3.readlines())

for line in open("arquivos/arquivo3.txt", "r"):
    print(line)