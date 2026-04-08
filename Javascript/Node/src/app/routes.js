import { Router } from 'express'
import SelecaoController from './controllers/SelecaoController.js'

const router = Router()

// ======== ROTAS ========
router.get('/', (req, res) => {
    res.sendFile('index.html', { root: 'public' })
})

router.get('/selecoes', SelecaoController.index)
router.get('/selecoes/:id', SelecaoController.show)

// ======== ROTAS DE POST ========
router.post('/selecoes', SelecaoController.store)

// ======== ROTAS DE PUT ========
router.put('/selecoes/:id', SelecaoController.update)

// ======== ROTAS DE DELETE ========
router.delete('/selecoes/:id', SelecaoController.delete)

export default router
