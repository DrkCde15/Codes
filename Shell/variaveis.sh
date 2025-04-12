#!/bin/bash
#sempre colocar aspas quando for STRING
#somente para calculos 2 parenteses

nome="Carlos Aragames"

echo "$nome"

numero1=34
numero2=45

total=$(($numero1 + numero2))

echo $total

saida_cat="$(cat /etc/passwd | grep kali)"

echo "$saida_cat"