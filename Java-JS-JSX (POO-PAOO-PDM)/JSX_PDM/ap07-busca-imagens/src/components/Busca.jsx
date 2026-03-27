import React, { Component } from 'react'
import {IconField} from 'primereact/iconfield'
import {InputText} from 'primereact/inputtext'
import {InputIcon} from 'primereact/inputicon' 

export default class Busca extends Component {
    constructor(props) {
        super(props)
    }
    state = {
        termoBusca: ''
    }
    onTermoAlterado = (evento) => {
        this.setState({termoBusca: evento.target.value})
    }
    onFormSubmit = (evento) => {
        evento.preventDefault()
        this.props.onBuscaRealizada(this.state.termoBusca)
    }
  render() {
    return (
        <form onSubmit={this.onFormSubmit}>
            <div className='flex flex-column'>
                <IconField iconPosition="left">
                    <InputIcon className='pi pi-search'/>
                    <InputText value={this.state.termoBusca} className='w-full' placeholder='Buscar' onChange={this.onTermoAlterado}/>
                </IconField>
                <Button label="OK" className="p-button-outlined mt-2" />
            </div>
        </form>
    )
  }
}
