def slipt_dds(txt):
    return txt.split(" ")
text = "Pyhton eh melhor que Java"

print(slipt_dds(text))

#atribui o retorno da funcao a uma variavel
token = slipt_dds(text)
print(token)

def slipt_dds(txt):
    texto = txt.upper()
    for letra in texto:
        print(letra)

print(slipt_dds(text))