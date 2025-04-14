#!/bin/bash

# Define o nível de debug (quanto maior, mais mensagens serão exibidas)
nivel_debug=0

# Função que exibe mensagens de debug conforme o nível definido
Debugar() {
    [ $1 -le $nivel_debug ] && echo "Debug $* ------"
}

# Função que soma os números de 1 a 25
Soma() {
    local total=0  # Variável local para armazenar o total da soma
    for i in $(seq 1 25); do
        Debugar 1 "Entrei no for com o valor: $i"      # Debug nível 1
        total=$((total + i))                           # Soma o valor ao total
        Debugar 2 "Depois da soma: $total"             # Debug nível 2
    done
    echo "Total final: $total"                         # Exibe o resultado final
}

# Verifica se a opção -d foi passada e define o nível de debug
case "$1" in
    -d) [ "$2" ] && nivel_debug=$2 ;;  # Se tiver segundo argumento, define o nível
esac

# Chama a função que executa a soma
Soma


#Como usar:
# Executar normalmente:

# bash
# Copiar
# Editar
# ./seu_script.sh
# Exibe só o total final (sem debug).

# Com nível de debug 1:

# bash
# Copiar
# Editar
# ./seu_script.sh -d 1
# Exibe as entradas no loop.

# Com nível de debug 2:

# bash
# Copiar
# Editar
# ./seu_script.sh -d 2
# Exibe as entradas e o resultado parcial após cada soma.