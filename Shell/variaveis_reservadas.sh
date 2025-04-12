#!/bin/bash
# Shebang: indica que o script deve ser interpretado pelo Bash

echo "parametro 1: $1"
# Mostra o primeiro parâmetro passado para o script (ex: ./script.sh arg1 arg2)

echo "parametro 2: $2"
# Mostra o segundo parâmetro passado para o script

echo "Todos os parametros: $*"
# Mostra todos os parâmetros como uma única string

echo "Quantos parametros: $#"
# Mostra o número total de parâmetros passados ao script

echo "Ultimo parametro: $?"
# Mostra o código de saída do último comando executado 

echo "PID: $$"
# Mostra o PID (Process ID) do processo atual — ou seja, do script em execução

echo $0
# Mostra o nome do script (como foi chamado)