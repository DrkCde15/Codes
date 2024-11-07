const express = require('express');
const app = express();


//mapa de funçoes
// mapa é um objeto javascript
const funçoes = {
    LembreteCriado: (lembrete) => {
        baseConsolidada[lembrete.id] = lembrete
    },
    ObservaçãoCriada: (observação) => {
        const observacoes = baseConsolidada[observação.lembreteId] ['observacoes'] || []
        observacoes.push(observação)
        baseConsolidada [observação.lembreteId] ['observacoes'] = observacoes
    }

}

const baseConsulta = {}

app.use(express.json());
app.get('/lembretes', (req, res) => {
    res.status(200).json(baseConsolidada)
    
})

app.post('/eventos', (req, res) => {
    const evento = req.body
    funçoes[evento.type](evento.payload)
    res.status(200).end()
})

const port = 6000
app.listen(port, () => console.log(`Consulta. Porta ${port}.`))