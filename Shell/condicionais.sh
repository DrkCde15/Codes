#!/bin/bash

var=""
var2=""
# Define duas variáveis com valores vazios

# Forma moderna e recomendada no Bash para comparação de strings
if [[ "$var" = "$var2" ]]; then
    echo "São iguais."
fi
# Usando colchetes duplos [[ ]], que suportam mais funcionalidades do Bash
# Compara as duas variáveis e imprime "São iguais." se forem idênticas

# Usando o comando test, equivalente a [ ]
if test "$var" = "$var2";
then
    echo "São iguais."
fi
# "test" é um comando POSIX que também serve para comparação
# Equivalente a: if [ "$var" = "$var2" ]

# Outra forma com [[ ]], mas com o "then" na linha de baixo
if [[ "$var" = "$var2" ]]
then
    echo "São iguais."
fi

# Comparação usando colchetes simples [ ], também POSIX
if [ "$var" = "$var2" ]
then
    echo "São iguais."
fi

# Forma compacta com [ ] e operador lógico AND (&&)
[ "$var" = "$var2" ] && echo "sao guais"
# Se a condição for verdadeira, executa o comando à direita
# Ideal para scripts mais enxutos

# Forma compacta com [ ] e operador lógico OR (||)
[ "$var" = "$var2" ] || echo "sao guais"
# Se a condição for falsa, executa o comando à direita
# Nesse caso, não deve imprimir nada, pois as variáveis são iguais