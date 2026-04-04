arq2 = open ("arquivos/arquivo2.txt", "w") #w = write (escrita)
arq2.write("Python para hacking")
arq2.close()

arq2 = open ("arquivos/arquivo2.txt", "r") #r = read (leitura)
print(arq2.read())

arq2 = open ("arquivos/arquivo2.txt", "a") #a = append (anexar)
arq2.write(", automacao e I.A.")
arq2.close()

arq2 = open ("arquivos/arquivo2.txt", "r")
print(arq2.read())

arq2.seek(0, 0)
print(arq2.read())