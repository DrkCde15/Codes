#Operador logico and = etorna True se todas as condições forem verdadeiras
#Operador logico or = retorna True se pelo menos uma das condições forem verdadeiras
#Operador logico not = inverte o valor da condição

print(input("Informe seu nome: "))  # Solicita o nome do usuário

idade = int(input("Informe sua idade: "))  # Solicita a idade do usuário

if idade > 17:  # Se a idade for maior que 17
    print("Pode dirigir")  # Imprime "Pode dirigir"
else:  # Senão
    print("Não pode dirigir")  # Imprime "Não pode dirigir"
    
#Operador logico and
nome = "João"
idade = 18
if idade >17 and nome == "João":
    print("Pode dirigir")
else:
    print("Não pode dirigir")

nome = input("Digite seu nome: ")
grn = input("Digite sua sexualidade: ")
if grn != "hetero":
    print("Voce eh gay!!")
else:
    print("Voce nao eh gay!!")

print ("Seu nome eh " + nome + " e voce eh gay")

#operador logico or
nome = "João"
idade = 18
if idade >17 or nome == "João":
    print("Pode dirigir")
else:
    print("Não pode dirigir")
    
#operador logico not
nome = "João"
idade = 18
if not idade >17 or nome == "Carlos":
    print("Pode dirigir")
else:   
    print("Não pode dirigir")


#operador logico not, and e or
nome = "João" #Pode ser João ou Carlos
idade = 18 #Pode ser 17 ou 18
if not idade >17 and nome == "João" or nome == "Carlos": # se o nome for João ou Carlos e a idade for menor que 17 não pode dirigir
    print("Pode dirigir") #Pode dirigir
else:   #Senão
    print("Não pode dirigir") #Não pode dirigir
