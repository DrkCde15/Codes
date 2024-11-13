const express = require('express')
const { v4: uuidv4 } = require('uuid')
const app = express()
//middleware
app.use(express.json())

const baseObservacoes = {}

const funcoes = {
  ObservacaoClassificada: (observacao) => {
    const observacaos = baseObservacoes[observacao.lembreteId]
    const obsParaAtualizar = observacoes.find(o => o.id === observacao.id)
    obsParaAtualizar.status = observacao.status
    axios.post('http://localhost:10000/eventos', {
      type: 'ObservacaoClassificada',
      payload: {
        id: observacao.id,
        texto: observacao.texto,
        lembreteId: observacao.lembreteId,
        status: observacao.status
      }
    })
  }
}
//POST /lembretes/1/observacoes
app.post('/lembretes/:id/observacoes', (req, res) => {
  const idObs = uuidv4()
  const { texto } = req.body
  const observacoesDoLembrete = baseObservacoes[req.params.id] || []
  observacoesDoLembrete.push({id: idObs, texto: texto})
  baseObservacoes[req.params.id] = observacoesDoLembrete
  res.status(201).json(observacoesDoLembrete)
})

//GET /lembretes/1/observacoes
app.get('/lembretes/:id/observacoes', (req, res) => {
  res.json(baseObservacoes[req.params.id] || [])
})

//exibir evento
app.post('/eventos', (req, res) => {
  try{
    const evento = req.body
    funcoes[evento.type](evento.payload)
    console.log(evento)
  }
  catch(e){}
  res.end()
})
const port = 5000
app.listen(port, () => {
  console.log(`Observações. Porta ${port}.`)
})