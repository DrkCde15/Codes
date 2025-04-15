#!/bin/bash

echo "Expressões Regulares"
#^
echo -e "\n 1. Linhas que começam com 'root'"
grep '^root' /etc/passwd

#$
echo -e "\n 2. Linhas que terminam com '/bin/bash'"
grep '/bin/bash$' /etc/passwd

#.
echo -e "\n 3. Usuários com nome de 4 letras (qualquer caractere)"
grep '^....:' /etc/passwd

#+
echo -e "\n 4. Usuários com uma ou mais letras 'a' no nome"
grep -E 'a+.*:' /etc/passwd

#[]
echo -e "\n 5. Usuários que começam com 'r', 's' ou 't'"
grep '^[rst]' /etc/passwd

#[^]
echo -e "\n 6. Usuários que NÃO começam com letras"
grep '^[^a-zA-Z]' /etc/passwd

#|
echo -e "\n 7. Usuários que usam bash OU nologin"
grep -E '/bin/bash|/usr/sbin/nologin' /etc/passwd


#.*
echo -e "\n 8. Qualquer número de caracteres entre /home/ e bash"
grep '/home/.*bash' /etc/passwd

#{}
echo -e "\n 9. UID com exatamente 3 dígitos"
grep -E ':[0-9]{3}:' /etc/passwd

echo -e "\n Fim dos testes com expressões regulares no /etc/passwd"
