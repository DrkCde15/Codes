const express = require("express")
const axios = require('axios')
const uuid = require('uuid')
const app = express();

//função middleware
app.use(express.json())

const baseObservacoes = {}

//POST /lembretes/id/observacoes
app.post('/lembretes/:id/observacoes', async(req, res) => {
    const idObs = uuid()
    const { texto } = req.body
    const observacoesDoLembrete = baseObservacoes[req.params.id] || []
    const observacao = {
        id: idObs,
        texto: texto,
        lembreteId: req.params.id,
        status: 'pendente'
    }
    observacoesDoLembrete.push({id: idObs, texto: texto})
    baseObservacoes[req.params.id] = observacoesDoLembrete
    await axios.post('http://localhost:10000/eventos', {
        type : 'ObservacaoCriada',
        payload : observacao
    })
    res.status(201).json(observacoesDoLembrete)
})

app.post('/eventos', (req, res) => {
  const evento = req.body
  console.log(evento)
  res.end()
})


const port = 5000
app.listen(port, () => {
    console.log(`Observações. Porta ${port}.`)
})

//GET /lembreste/id/observacoes
app.get('/lembretes/:id/observacoes', (req, res) => {
    res.json(baseObservacoes[req.params.id] || [])
})

