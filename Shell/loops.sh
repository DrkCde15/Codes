#!/bin/bash

echo "============for 1"
for (( i = 1; i<11; i++)); do
    echo $i
done

echo "============for 2(seq)"

for i in $(seq 10); do
    echo $i
done

echo "============for 3(array)"
fruts=(
    'Laranja'
    'maça'
    'uva'
    'pera'
    'jaca'
)
for i in "${fruts[@]}"; do
    echo $i
done

echo "============while"
cont=0
while [[ $cont -lt ${#fruts[@]} ]]; do
    echo $cont
    cont=$((cont+1))
done