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
    try{
        const evento = req.body
        funcoes[evento.type](evento.payload)
        console.log(evento)
    }
    catch(e){}
    res.end()
})

const port = 7000
 app.listen(port, () => {console.log(`Classificacao. Porta ${port}.`)})