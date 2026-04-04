#Imprimindo Strings
print("Testanto strings em Python")
print("\n")
print("Quero um emprego logo!!")
print("\n")

#Indexando Strings
s = "Kali Linux"
print(s)

#Vai mostrar os caracteres da string
print(s[0])
print(s[1])
print(s[2])
print(s[3])
print(s[4])
print(s[5])

#Vai do 0 até o 4°caracter da String
print(s[0:4])

#Vai trazer tudo que está a partir do index 1
print(s[1:])

#Vai mostrar tudo que está antes do index 8
print(s[:8])

#O último caracter de traz para a frente
print(s[-1])

#Não mostra o último caracter
print(s[:-1])

#Retorna os números saltando de 1 em 1
print(s[::1])

#Retorna os números saltando de 2 em 2
print(s[::2])

#Retorna os números saltando de 1 em 1 de trás pra frente
print(s[::-1])

#Concatenando strings
print(s + " é a melhor distro")

#Modificando o valor de uma string inteira
s = s + " Vai dominar o mundo"
print(s)

#multiplicação de caracter
l = "j"
print(l * 3)


#Built-in
print(s.capitalize())#converte a primeira letra da frase para maiúsculo
print(s.lower())#deixa tudo minusculo
print(s.upper())#deixa tudo maiusculo
print(s.split())#quebra as strings por espaço
print(s.split('n'))#quebra as strings quando ele achar o caracter definido


#Funções String
s = "Kali é a melhor ferramenta para pentest"
print(s)
print(s.count('a'))#quantas vezes essa letra aparece na string
print(s.isalnum())#se ela é toda de numero
print(s.islower())#se está toda em minúsculo
print(s.isspace())#se é apenas espaço
print(s.endswith('t'))#se termina com a letra definida

#Comparando Strings
print("Python" == "Java")
print("Python" == "Python")