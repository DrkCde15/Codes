import express from 'express'
import router from './app/routes.js'

const app = express()

// indicar para o express ler body com json
app.use(express.json())

// servir arquivos estáticos
app.use(express.static('public'))

// usar o router
app.use(router)

export default app


