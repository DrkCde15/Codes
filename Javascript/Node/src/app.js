import express from 'express'

const app = express()
app.use(express.json())
app.use(express.static('public'))

const selecoes = [
  { id: 1, nome: 'Brasil', grupo: 'G' },
  { id: 2, nome: 'Alemanha', grupo: 'G' },
  { id: 3, nome: 'Argentina', grupo: 'G' },
  { id: 4, nome: 'Franca', grupo: 'G' },
  { id: 5, nome: 'Espanha', grupo: 'G' },
  { id: 6, nome: 'Inglaterra', grupo: 'G' },
]

function normalizarId(id) {
  const idNumero = Number(id)
  if (!Number.isInteger(idNumero) || idNumero <= 0) {
    return null
  }

  return idNumero
}

function buscarIndexSelecao(id) {
  return selecoes.findIndex((selecao) => selecao.id === id)
}

function validarDadosPost(body) {
  const id = normalizarId(body?.id)
  const nome = body?.nome?.trim()
  const grupo = body?.grupo?.trim().toUpperCase()

  if (!id || !nome || !grupo || grupo.length !== 1) {
    return null
  }

  return { id, nome, grupo }
}

function validarDadosPut(body) {
  const nome = body?.nome?.trim()
  const grupo = body?.grupo?.trim().toUpperCase()

  if (!nome || !grupo || grupo.length !== 1) {
    return null
  }

  return { nome, grupo }
}

// ======== ROTAS DE GET ========
app.get('/', (req, res) => {
  res.sendFile('index.html', { root: 'public' })
})

app.get('/selecoes', (req, res) => {
  res.status(200).json(selecoes)
})

app.get('/selecoes/:id', (req, res) => {
  const id = normalizarId(req.params.id)
  if (!id) {
    return res.status(400).send('ID invalido. Informe um numero inteiro maior que 0.')
  }

  const index = buscarIndexSelecao(id)
  if (index === -1) {
    return res.status(404).send('Selecao nao encontrada.')
  }

  return res.status(200).json(selecoes[index])
})

// ======== ROTAS DE POST ========
app.post('/selecoes', (req, res) => {
  const novaSelecao = validarDadosPost(req.body)
  if (!novaSelecao) {
    return res.status(400).send('Dados invalidos. Envie id, nome e grupo (1 letra).')
  }

  const jaExiste = buscarIndexSelecao(novaSelecao.id) !== -1
  if (jaExiste) {
    return res.status(409).send('Ja existe uma selecao com esse ID.')
  }

  selecoes.push(novaSelecao)
  return res.status(201).json(novaSelecao)
})

// ======== ROTAS DE PUT ========
app.put('/selecoes/:id', (req, res) => {
  const id = normalizarId(req.params.id)
  if (!id) {
    return res.status(400).send('ID invalido. Informe um numero inteiro maior que 0.')
  }

  const dadosAtualizacao = validarDadosPut(req.body)
  if (!dadosAtualizacao) {
    return res.status(400).send('Dados invalidos. Envie nome e grupo (1 letra).')
  }

  const index = buscarIndexSelecao(id)
  if (index === -1) {
    return res.status(404).send('Selecao nao encontrada.')
  }

  selecoes[index] = { id, ...dadosAtualizacao }
  return res.status(200).json(selecoes[index])
})

 // ======== ROTAS DE DELETE ========
app.delete('/selecoes/:id', (req, res) => {
  const id = normalizarId(req.params.id)
  if (!id) {
    return res.status(400).send('ID invalido. Informe um numero inteiro maior que 0.')
  }

  const index = buscarIndexSelecao(id)
  if (index === -1) {
    return res.status(404).send('Selecao nao encontrada.')
  }

  const [selecaoRemovida] = selecoes.splice(index, 1)
  return res.status(200).json(selecaoRemovida)
})

export default app
