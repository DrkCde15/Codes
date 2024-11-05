# Cria uma lista de 1 a 100 e filtra os numeros divisiveis por 2 e 4
num = list(range(1, 101))

div_por_4 = [num for num in num if num % 2 == 0 and num % 4 == 0]

# Exibir a lista gerada
print(div_por_4)