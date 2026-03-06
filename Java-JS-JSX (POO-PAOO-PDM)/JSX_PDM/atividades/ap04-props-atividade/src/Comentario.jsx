import React from 'react'

const Comentario = ({ icone, nome, texto, dataHora }) => {
  return (
    <div className="d-flex">
      <div className="d-flex align-items-center">
        <i className={`fa-solid fa-${icone} fa-4x`}></i>
      </div>
      <div className="ms-2 flex-grow-1 border rounded p-2">
        <h4 className="text-center">{nome}</h4>
        <p className="text-center mb-1">{texto}</p>
        <p className="text-center text-muted small mb-0">{dataHora}</p>
      </div>
    </div>
  )
}

export default Comentario
