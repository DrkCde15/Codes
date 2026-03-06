// rafce
import React from 'react'

const Feedback = ({textoOK, textoNOK, funcaoOK, funcaoNOK}) => {
  return (
    // .d-flex.justify-content-evenly.m2
    <div className="d-flex justify-content-evenly m-2">
      {/* button[type=button].btn.btn-*2 */}
      <button
        onClick={funcaoOK} 
        type="button" 
        className="btn btn-primary">
          {textoOK}
      </button>
      <button 
        onClick={funcaoNOK}
        type="button" 
        className="btn btn-danger">
          {textoNOK}
      </button>
    </div>
  )
}

export default Feedback