const express = require('express')
const axios = require('axios')


const app = express()
app.use(express.json())
const palavraChave = 'importante'
const funçoes = {

    ObservacaoCriada: (observacao) => {
        obserservacao.status = 
        observacao.texto.includes(palavraChave) ? 'importante' : 'normal'
        axios.post('http://localhost:10000/eventos', {
            type: 'ObservacaoClassificada',
            payload: observacao
            
        })
}
}

app.post('/eventos', (req, res) => {
    const eventos = req.body
    funçoes[eventos.type](eventos.payload)
    res.status(200).end()
})

const port = 7000
 app.listen(port, () => {console.log(`Classificacao. Porta ${port}.`)})