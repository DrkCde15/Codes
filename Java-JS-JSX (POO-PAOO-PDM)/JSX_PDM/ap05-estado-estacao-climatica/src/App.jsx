// rafce
//hook
import React, { useState } from 'react'

const App = () => {
  const [latitude, setLatitude] = useState(null)
  const [longitude, setLongitude] = useState(null)
  const [estacao, setEstacao] = useState(null)
  const [data, setData] = useState(null)
  const [icone, setIcone] = useState(null)
  const [mensagemDeErro, setMensagemDeErro] = useState(null)

  const obterEstacao = (dataAtual, latitude) => {
    const ano = dataAtual.getFullYear()
    const d1 = new Date(ano, 5, 21) //início do inverno/verão
    const d2 = new Date(ano, 8, 23) //início da primavera/outono
    const d3 = new Date(ano, 11, 22)//início do verão/inverno
    const d4 = new Date(ano, 2, 21)//início do outono/primavera
    const sul = latitude < 0
    if(dataAtual >= d1 && dataAtual < d2)
      return sul ? 'Inverno' : 'Verão'
    if(dataAtual >= d2 && dataAtual < d3)
      return sul ? 'Primavera' : 'Outono'
    if(dataAtual >= d3 || dataAtual < d4)
      return sul ? 'Verão' : 'Inverno'
    return sul ? 'Outono' : 'Primavera'
  }

  const obterLocalizacao = () => {
    //consultar a localização do usuário, registrando uma função callback
    //na função callback
    //extrair a data do sistema
    //obter a estação climática do usuário
    //decidir qual é o ícone certo
    //atualizar as variáveis de estado
    navigator.geolocation.getCurrentPosition(
      (position) => {
        const dataAtual = new Date()
        const estacao = obterEstacao(dataAtual, position.coords.latitude)
        const icone = icones[estacao]
        setLatitude(position.coords.latitude)
        setLongitude(position.coords.longitude)
        setEstacao(estacao)
        setData(dataAtual.toLocaleTimeString())
        setIcone(icone)
      }, 
      (err) => {
        console.log(err)
        setMensagemDeErro('Tente novamente mais tarde')
      }
    )
  }

  const icones = {
    'Outono': 'leaf',
    'Inverno': 'snowflake',
    'Verão': 'sun',
    'Primavera': 'seedling'
  }
  
  return (
    <div className='container mt-2'>
      <div className="row justify-content-center">
        <div className="col-12">
          <div className="card">
            <div className="card-body">
              <div 
                className="d-flex align-items-center border rounded mb-2 p-4"
                style={{height: '6rem'}}>
                  <i className={`fa-solid fa-4x fa-${icone}`}></i>
                  {/* p.w-75.ms-3.text-center.fs-1 */}
                  <p className="w-75 ms-3 text-center fs-1">{estacao}</p>

              </div>
              <div>
               <p className="text-center">
                {
                  latitude ?
                   `Coordenadas: ${latitude},${longitude}. Data: ${data}` 
                    :
                  mensagemDeErro ?
                      'É preciso permitir o acesso à localização para ver a sua estação climática'
                    :
                   'Clique no botão para saber a sua estação climatica'
                }
               </p>
              </div>
              {/* button.btn.btn-outline-primary.w-100.mt-2 */}
              <button 
                onClick={obterLocalizacao}
                className="btn btn-outline-primary w-100 mt-2">
                Qual a minha estação?
              </button>

            </div>
          </div>
        </div>
      </div>      
    </div>
  )
}

export default App