import pandas as pd
print(pd.__version__)

arquivo = "arquivos/20250516_SolicitantesRecursos_csv_2024.csv"
df = pd.read_csv(arquivo, sep=";", encoding="latin-1")
df.head()
print(df)
