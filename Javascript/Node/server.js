import app from './src/app.js'

const PORT = 3000

app.listen(PORT, () => {
  console.log(`Servidor escutando no endereço http://localhost:${PORT}`)
})