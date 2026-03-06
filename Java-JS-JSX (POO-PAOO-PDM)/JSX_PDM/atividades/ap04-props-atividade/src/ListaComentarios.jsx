import React from 'react'

const ListaComentarios = (props) => {
  return (
    <div className="container border mt-2">
      <div className="row">
        <div className="col-12">
          <div className="fa fa-users fa-2x p-3 text-primary"></div>
        </div>
      </div>
      <div className="row">
        {props.children}
      </div>
    </div>
  )
}

export default ListaComentarios
