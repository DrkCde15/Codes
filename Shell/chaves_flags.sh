#!/bin/bash

# Pega a lista de usuários do /etc/passwd
usuario=$(cut -d : -f 1 /etc/passwd)

# Mensagem de ajuda
mensagem_uso="
    Uso: $0 -[OPÇÕES]

        -h - Menu de ajuda
        -v - Versão
        -s - Ordenar a saída
        -m - Converter saída para maiúsculas
"

version="v1.2"
chave_ordena=0
chave_maiusculo=0

# Verifica a flag passada
case "$1" in
    -h) echo "$mensagem_uso" && exit 0 ;;
    -v) echo "$version" && exit 0 ;;
    -s) chave_ordena=1 ;;
    -m) chave_maiusculo=1 ;;
     *) echo "$mensagem_uso" && exit 1 ;;
esac

# Processa a saída conforme flags
saida="$usuario"

if [ "$chave_ordena" -eq 1 ]; then
    saida=$(echo "$saida" | sort)
fi

if [ "$chave_maiusculo" -eq 1 ]; then
    saida=$(echo "$saida" | sort | tr '[:lower:]' '[:upper:]')
fi

# Mostra resultado final
echo "$saida"
