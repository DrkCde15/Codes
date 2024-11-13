const axios = require('axios')
const express = require ('express')
const app = express()
app.use(express.json())

let id = 1

const baseLembretes = {}
/*
    {
        1:{
            id: 1,
            texto: fazer cafe
        },
        2:{
            id: 2,
            texto: nadar
        }
    }
*/

//GET /Lembretes
app.get('/lembretes', (req, res) => {
    res.json(baseLembretes)
})

//POST /Lembretes
app.post('/lembretes', async function(req, res){
    const texto = req.body.texto
    const lembrete = {id: id, texto: texto}
    baseLembretes[id] = lembrete
    id++
    await axios.post('httP://localhost:10000/eventos', {
        type: 'LembreteCriado',
        payload: lembrete
    })
    app.post('/eventos', (req, res) => {

        try{
            const evento = req.body
            funcoes[evento.type](evento.payload)
            console.log(evento)
        }
        catch(e){}
        res.end()
    })

    res.status(201).json(baseLembretes)
})

const port =  4000
app.listen(port, () => {
console.log(`Lembrentes. Porta ${port}.`)
})