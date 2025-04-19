#!/bin/bash

# Nome do arquivo onde os títulos serão salvos
file_titles="titles.txt"

# Códigos de cores ANSI para o terminal
green="\033[1;32m"  # Verde brilhante
red="\033[1;31m"    # Vermelho brilhante

# Verifica se o 'lynx' está instalado; se não estiver, instala automaticamente
[ ! -x "$(which lynx)" ] && sudo apt install lynx -y

# Baixa o código-fonte da página https://lxer.com/
# Filtra as linhas que contêm "blurb" (onde estão os títulos)
# Remove as tags HTML usando 'sed'
lynx -source https://lxer.com/ | grep blurb | sed 's/<div.*line">//;s/<\/span.*//' > titles.txt

# Lê o arquivo de títulos linha por linha e imprime com cores
while read -r titulo_lxer
do
    # Exibe o título com prefixo "Titulo:" em vermelho e o conteúdo em verde
    echo -e "${red}Titulo: ${green}$titulo_lxer"
done < "$file_titles"
