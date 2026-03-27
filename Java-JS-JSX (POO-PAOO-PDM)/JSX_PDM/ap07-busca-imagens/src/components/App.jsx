import React from 'react'
import Busca from './Busca.jsx'
import {createClient} from 'pexels'

export default class App extends React.Component {
  pexelsClient = null
  componentDidMount() {
    this.pexelsClient = createClient(import.meta.env.API_PEXELS)
  }
  onBuscaRealizada = (termoDeBusca) => {
    console.log(termoDeBusca)
  }
  render() {
    return (
      <div className='grid.justify-content-center.m-auto.w-9.border-round border-1 border-400'>
        <div className='col-12'>
          <h1 className='text-center'>Exibir Imagens de...</h1>
        </div>
        <div className='col-12'>
          <Busca onBuscaRealizada={this.onBuscaRealizada} />
        </div>
      </div>
    )
  }
}