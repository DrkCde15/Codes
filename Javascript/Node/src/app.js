import express from 'express'

const app = express()
app.use(express.json()) // para permitir o parsing de JSON no corpo das requisições
app.use(express.static('public')) // para servir arquivos estáticos da pasta 'public'

// mock de dados das selecoes
const selecoes = [
  { id: 1, nome: 'Brasil', grupo: 'G' },
  { id: 2, nome: 'Alemanha', grupo: 'G' },
  { id: 3, nome: 'Argentina', grupo: 'G' },
  { id: 4, nome: 'Franca', grupo: 'G' },
  { id: 5, nome: 'Espanha', grupo: 'G' },
  { id: 6, nome: 'Inglaterra', grupo: 'G' },
]

// =========== rotas GET ===========

// rota raiz
app.get('/', (req, res) => {
  res.sendFile('index.html', { root: 'public' })
})

// criar uma rota de GET para listar as selecoes e mostrar os status
app.get('/selecoes', (req, res) => {
  res.status(200).json(selecoes)
})

// =========== rotas POST ===========

app.post('/selecoes', (req, res) => {
  if (!req.body || !req.body.id || !req.body.nome || !req.body.grupo) {
    return res.status(400).send('Dados invalidos. Envie id, nome e grupo.')
  }

  selecoes.push(req.body)
  res.status(201).send('Selecao adicionada com sucesso')
})

// exportar o app para ser usado no server.js
export default app
