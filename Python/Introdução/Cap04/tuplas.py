#criando tuplas
tupla1 = ("Caio", "Alicia", "Afonso")
print(tupla1)
print(type(tupla1))

#tupla de um unico item
tupla2 = ("Pedro",)
print(tupla2)
print(type(tupla2))

#indexação
tupla1 [0]
print(tupla1 [0])

#comprimento da tupla
len(tupla1)
print(len(tupla1))

#concatenar tuplas
tupla1 + tupla2
print(tupla1 + tupla2)

#slicing
tupla1[0:2]
print(tupla1[0:2])

#deletar tupla
# del tupla1
# print(tupla1)

#criando tupla 2
t2 =("A", "B", "C", "D", "E", "F", "G")
print(t2)

#convertendo tupla em lista
l = list(t2)
print(l)

#adicionando itens a lista
l.append("H")
print(l)

#convertendo lista em tupla
t3 = tuple(l)
print(t3)
