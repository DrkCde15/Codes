# Abrir e ler o arquivo com codificação adequada
with open('arquivos/20250516_SolicitantesRecursos_csv_2024.csv', 'r', encoding='latin-1') as f:
    data = f.read()

# Dividir linhas
rows = data.strip().split('\n')
print("Linhas (raw):", rows)

# Dividir colunas
full_data = []
for row in rows:
    split_row = row.split(',')
    full_data.append(split_row)

print("Dados formatados:", full_data)

# Contar o número de linhas
num_linhas = len(full_data)
print("Número total de linhas:", num_linhas)

# Contar o número de colunas (com base na primeira linha)
if full_data:
    num_colunas = len(full_data[0])
    print("Número de colunas:", num_colunas)
else:
    print("Arquivo vazio.")
