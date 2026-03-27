// rafce
//hook
import React, { useState } from 'react'

const App = () => {
  // let contador = 0
  const [contador, setContador] = useState(0)
  return (
    <div style={{textAlign: 'center', marginTop: 50}}> 
      <h1>
        Meu contador: {contador}
      </h1>
      <button 
        onClick={() => setContador(contador + 1)}
        style={{padding: 4}}>
        Incrementar
      </button>
      {' '}
      {/* fazer o botão para decrementar */}
      <button 
        onClick={() => setContador(contador - 1)}
        style={{padding: 4}}>
        Decrementar
      </button>
      {/* adicionar um botão para reiniciar */}
      {' '}
      <button 
        onClick={() => setContador(0)}
        style={{padding: 4}}>
        Reiniciar
      </button>
    </div>
  )
}

export default App