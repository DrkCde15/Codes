import app from './src/app.js'
import connection from './infra/data_base.js'

const PORT = 3000

// fazer a conexao
connection.connect((erro) => {
  if (erro) {
    console.log(erro)
  }
  else{
    console.log("Conectado ao banco de dados")
    app.listen(PORT, () => {
      console.log(`Servidor escutando no endereço http://localhost:${PORT}`)
    })
  }
})