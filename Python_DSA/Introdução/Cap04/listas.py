#lista de números
lista_1 = [1, 3, 5, 7, 9]
print(lista_1)
print(type(lista_1))

#Lista de strings
lista_2 = ["dinheiro", "casa", "Jesus", "família", "felicidade", "casamento"]
print(lista_2)
print(type(lista_2))

#lista de números e strings
lista_3 = [23, 100, "Quero trabalhar e sair daqui!!!"]
print(lista_3)
print(type(lista_3))

#atualizando um item de lista
lista_2[1] = "carro"
lista_2[3] = "boxe"
lista_2[5] = "muay thai"
print(lista_2)

#deletar item da lista
del lista_2[1]
print(lista_2)

#lista de listas
listas = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print(listas)

#atribuindo um item da lista a uma variável
a = listas[0]
b = listas[1]
c = listas[2]
print(a)
print(b)
print(c)

a_1 = a[0]
print(a_1)

#operações com listas
lista = [[1, 2, 3], [10, 15, 20], [10.1, 2.7, 9,8]]
a = lista[0][0]
print(lista)
print(a)

b = lista[1][2]
print(b)

c = lista[0][2] + 10
print(c)

d = 10
e = d * lista[0][2]
print(d)
print(e)

#concatenando(juntando) listas
ls_1 =[1, 3, 7]
ls_2 = [5, 9, 26]
ls_total = ls_1 + ls_2

print(ls_total)

#Operador In(vai verificar se o caracter está dentro da lista e retornar False ou True)
lst = [100, -2, 3, 8]
print(10 in lst)
print(-2 in lst)

#Built-in
lista_num = [1, 3, 9, -35, 43, 72, 11, 13]
print(lista_num)

#cumprimento da lista
print(len(lista_num))

#valor maximo da lista
print(max(lista_num))

#valor minimo da lista
print(min(lista_num))

lista = ["MMA", "Muay Thai", "Boxe"]
print(lista)

#Adiciona itens a lista
lista.append("Capoeira")
lista.append("Karate")
print(lista)

a = []
a.append(10)
a.append(50)
print(a)

citys = ["Los Angeles", "Las Vegas", "Los Santos", "San Diego"]
citys.append("West Side")
citys.append("W")
print(citys)

#inverte a ordem dos itens da lista

citys = ["Los Angeles", "Las Vegas", "Los Santos", "San Diego"]
citys.append("West Side")
citys.append("W")
citys.reverse()
print(citys)

#ordenar a lista
x = [10, 23, 12, 66, 100, -24]
x.sort()
print(x)

list = ["Pedro", "Afonso", "Caio", "Lucas", "João"]
list.sort()
print(list)