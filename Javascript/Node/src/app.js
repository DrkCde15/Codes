const express = require('express')

const app = express()
const port = 3000

app.get('/', (req, res) => {
  res.send('API rodando na porta 3000')
})

app.listen(port, () => {
  console.log(`Servidor rodando no endereço http://localhost:${port}`)
})