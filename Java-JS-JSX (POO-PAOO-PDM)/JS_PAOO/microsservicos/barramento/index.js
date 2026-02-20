const axios = require('axios')
const express = require ('express')
const app = express()
app.use(express.json())

const eventos = []

//endpoint que envolve a base de eventos perdidos
app.get('/eventos', (req, res) => {
    res.json(eventos)
})

app.post('/eventos', async (req, res) => {
    const evento = req.body
    eventos.push(evento)
    console.log(evento)

    try{
    await axios.post('http://localhost:4000/eventos', evento)
    }
    catch(e){}
    
    try{
    await axios.post('http://localhost:5000/eventos', evento)
    }
    catch(e){}

    try{
    await axios.post('http://localhost:6000/eventos', evento)
    }
    catch(e){}
    res.status(200).json({msg: 'ok'})
})
const port = 10000
app.listen(10000, () => {
    console.log(`Barramento. Porta ${port}. `)
})