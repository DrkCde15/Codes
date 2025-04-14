#!/bin/bash

# Pega a lista de usuários do sistema (campo 1 do /etc/passwd)
usuario=$(cut -d : -f 1 /etc/passwd)

# Define a mensagem de ajuda que será exibida com a opção -h
mensagem_uso="
    Uso: $0 -[OPÇÕES]

        -h - Menu de ajuda
        -v - Versão
        -s - Ordenar a saída
        -m - Converter saída para maiúsculas
"

# Versão do script
version="v1.2"

# Variáveis para controlar opções escolhidas
chave_ordena=0
chave_maiusculo=0

# Ativa o modo de depuração (mostra comandos sendo executados)
set -x

# Verifica a opção passada como argumento
case "$1" in
    -h) echo "$mensagem_uso" && exit 0 ;;     # Exibe ajuda e sai
    -v) echo "$version" && exit 0 ;;          # Exibe versão e sai
    -s) chave_ordena=1 ;;                     # Ativa ordenação
    -m) chave_maiusculo=1 ;;                  # Ativa conversão para maiúsculas
     *) echo "$mensagem_uso" && exit 1 ;;     # Opção inválida, mostra ajuda
esac

# Define a saída inicial com a lista de usuários
saida="$usuario"

# Se a opção -s foi ativada, ordena a lista
if [ "$chave_ordena" -eq 1 ]; then
    saida=$(echo "$saida" | sort)
fi

# Se a opção -m foi ativada, ordena e converte a lista para maiúsculas
if [ "$chave_maiusculo" -eq 1 ]; then
    saida=$(echo "$saida" | sort | tr '[:lower:]' '[:upper:]')
fi

# Exibe a saída final no terminal
echo "$saida"

# Desativa o modo de depuração
set +x
