const express = require('express')
const axios = require('axios')
const app = express()
app.use(express.json())

//mapa de funções
//um mapa é um objeto Javascript
//tipo do evento : função a ser executada
const funcoes = {
  LembreteCriado: (lembrete) => {
    baseConsolidada[lembrete.id] = lembrete
  },
  ObservacaoCriada: (observacao) => {
    const observacoes = baseConsolidada[observacao.lembreteId]['observacoes'] || []
    observacoes.push(observacao)
    baseConsolidada[observacao.lembreteId]['observacoes'] = observacoes
  },
  ObservacaoAtualizada: (observacao) => {
    const observacoes  = baseConsolidada[observacao.lembreteId]['observacoes']
    const indice = observacoes.findIndex(o => o.id === observacao.id)
    observacoes[indice] = observacao
  }
}

const baseConsolidada = {}

app.get('/lembretes', (req, res) => {
  res.status(200).json(baseConsolidada)
})

app.post('/eventos', (req, res) => {
  try{
    const evento = req.body
    funcoes[evento.type](evento.payload)
  }
  catch(e){}
  res.status(200).end()  
})
const port = 6000
app.listen(port, async () => {
  console.log(`Consulta. Porta ${port}. `)
  const rep = await axios.get('http://localhost:10000/eventos')
  rep.data.forEach(evento => {
    try{
      funcoes[evento.type](evento.payload)
    }
    catch(e){}
  }) 
})
