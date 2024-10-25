const express = require ('express')
const app = express()
app.use(express.json())

let id = 2

const baseLembretes = {
    1: {
        id: 1,
        texto: 'Fazer cafe'
    }
}
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
app.post('/lembretes', function(req, res){
    const texto = req.body.texto
    baseLembretes[id] = {id: id, texto: texto}
    id++
    res.status(201).json(baseLembretes)
})

const port =  4000
app.listen(port, () => {
console.log(`Lembrentes. Porta ${port}.`)
})