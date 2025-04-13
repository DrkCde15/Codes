#!/bin/bash

usuario="$(cat /etc/passwd | cut -d : -f 1)"
#echo "$usuario"

mensagem_uso="
    $0 -[OPÇOES]

        -h - Menu de ajuda
        -v - Versao
        -s - Ordenar a saida

"
version="v1.1"

case "$1" in
    -h) echo "$mensagem_uso" && exit 0  ;;
    -v) echo "$version" && exit 0       ;;
    -s) echo "$usuario" | sort && exit 0;;
    -*) echo "$usuario"                 ;;
esac