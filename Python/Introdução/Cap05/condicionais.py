#condicionais if e else
if 5 > 2:
    print('Certo')
    print('Isso é verdadeiro')
else:
    print('Errado')
    print('Isso é falso')
    
#if e else com variável string
a = "Segunda"
if a == "Terça":
    print('Vai fazer sol')
else:
    print('Vai fazer chuva')

#if, else e elif
a = "Segunda"
if a == "Segunda":
    print('Vai fazer sol')
elif a == "Terça": 
    print('Vai fazer chuva')
elif a == "Quarta":
    print('Vai fazer sol')
elif a == "Quinta":
    print('Vai estar frio')
elif a == "Sexta":
    print('Vai estar nublado')
else:
    print('Sem previsoes')