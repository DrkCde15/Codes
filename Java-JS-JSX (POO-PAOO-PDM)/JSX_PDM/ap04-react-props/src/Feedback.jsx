import React from 'react'

const Feedback = props => {
  return (
    <div className='d-flex justify-content-evenly m-3'>
      {/* button[type=button].btn.btn-*2 */}
      <button
        onClick={props.funcaoOK} 
        type="button" 
        className="btn btn-primary">
          {props.textoOK}
      </button>
      <button
        onClick={props.funcaoNOK} 
        type="button" 
        className="btn btn-danger">
          {props.textoNOK}
        </button>
    </div>
  )
}

export default Feedback