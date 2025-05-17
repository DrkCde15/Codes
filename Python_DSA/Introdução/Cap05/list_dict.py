#list comprehension
[x for x in range (10)]
lista_num = [x for x in range (10)]
print (lista_num)

lista_num = [x for x in range (10) if x < 5]
print (lista_num)

lista_fruta = ['banana', 'maca', 'manga', 'uva']
lista_nova = []

for x in lista_fruta:
    if 'm' in x:
        lista_nova.append(x)
print (lista_nova)

#dic comprehension
dict_alunos = {'Afonso': 9, 'Alice': 8, 'Caio': 5}

dict_alunos_status = {k: 'Aprovado' if v >= 6 else 'Reprovado' for (k, v) in dict_alunos.items()}
print(dict_alunos_status)

