import os

txt = "Linux eh melhor que windows,"
txt = txt + " por ser livre"
txt += " e amigavel"
print(txt)

arq = open(os.path.join("arquivos/linux.txt"), "w")

for palavra in txt.split(" "):
    arq.write(palavra + " ")

arq.close()

arq = open('arquivos/linux.txt', 'r')
conteudo = print(arq.read())
arq.close()
print(conteudo)