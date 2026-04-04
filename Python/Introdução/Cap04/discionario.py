# #lista com dicionario
# estudantes_dict = {"Pedro":23, "Afonso": 18, "Lucas": 15}
# print(estudantes_dict)
# print(type(estudantes_dict))

# print(estudantes_dict["Afonso"])

# #adicionando um item ao dicionário
# estudantes_dict["Caio"] = 21
# print(estudantes_dict)

# #deletar dicionario
# del(estudantes_dict)
# print(estudantes_dict)

estudantes = {"Pedro":23, "Afonso": 18, "Lucas": 15, "João":12}
print(estudantes)

#verificar o comprimento da lista pelos pares
print(len(estudantes))

#retornar as chaves
print(estudantes.keys())

#retornar os valores
print(estudantes.values())

#retornar os elementos
print(estudantes.items())

#adicionar mais elemntos
estudantes_2 = {"Anderson": 18, "Connor": 19, "Messi": 44, "CR7": 33}
estudantes_2.update(estudantes)  # Atualiza estudantes_2 com os valores de estudantes
print(estudantes_2)  # Exibe o dicionário atualizado
