const axios = require('axios')
const express = require ('express')

const app = express()
app.use(express.json())

app.post('/eventos', (req, res) => {
    const evento = req.body
    console.log(evento)
    axios.post('http://localhost:4000/eventos', evento)
    
    axios.post('http://localhost:5000/eventos', evento)
    res.status(200).json({msg: 'ok'})

})
const port = 10000
app.listen(10000, () => {
    console.log(`Barramento. Porta ${port}. `)
})