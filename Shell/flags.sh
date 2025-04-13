#!/bin/bash

usuario="$(cat /etc/passwd | cut -d : -f 1)"
#echo "$usuario"

mensagem_uso="
    $0 -[OPÇOES]

        -h - Menu de ajuda
        -v - Versao
        -s - Ordenar a saida

"
version="v1.0"
if [ "$1" = "-h" ]; then
    echo "$mensagem_uso" && exit 0
fi

if [ "$1" = "-v" ]; then
    echo "$version" && exit 0
fi

if [ "$1" = "-s" ]; then
    echo "$usuario" | sort && exit 0
fi