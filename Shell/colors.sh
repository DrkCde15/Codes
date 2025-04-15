#!/bin/bash

nivel_debug=0

# Códigos ANSI para cores
roxo="\033[1;35m"
ciano="\033[1;36m"
reset="\033[0m"

# Função de debug com cor aplicada à mensagem
Debugar() {
    local nivel=$1
    shift
    [ $nivel -le $nivel_debug ] && echo -e "$*"
}

Soma() {
    local total=0
    for i in $(seq 1 25); do
        Debugar 1 "${roxo}Debug: Entrei no for com o valor: $i${reset}"
        total=$((total + i))
        Debugar 2 "${ciano}Debug: Depois da soma: $total${reset}"
    done
    echo -e "${ciano}Total final: $total${reset}"
}

# Argumento -d para nível de debug
case "$1" in
    -d) [ "$2" ] && nivel_debug=$2 ;;
esac

Soma
