import React from 'react'

const Cartao = (props) => {
  return (
    <div className="card">
      <div className="card-header text-muted">
        {props.cabecalho}
      </div>
      <div className="card-body">
        {props.children}
      </div>
    </div>
  )
}

export default Cartao
