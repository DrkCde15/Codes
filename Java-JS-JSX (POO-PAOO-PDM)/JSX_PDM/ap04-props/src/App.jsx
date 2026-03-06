import Pedido from "./Pedido"
import Cartao from "./Cartao"
import Feedback from "./Feedback"
const App = () => {
  const textoOK = "Já recebi"
  const textoNOK = "Ainda não recebi"
  const funcaoOK = () => alert('Agradecemos o feedback')
  const funcaoNOK = () => alert('Verificaremos')
  const componenteFeedback = (
    <Feedback 
      textoOK={textoOK}
      textoNOK={textoNOK}
      funcaoOK={funcaoOK}
      funcaoNOK={funcaoNOK}
    />
  )
  return <div className="container border mt-2">

    <div className="row">
      <div className="col-12">
        {/* .i.fa.fa-hippo */}
        <div className="fa fa-hippo fa-2x p-3"></div>
      </div>
    </div>

    <div className="row">
      {/* .col-sm-12.col-lg-6.col-xxl-3*4    */}
      <div className="col-sm-12 col-lg-6 col-xxl-3">
        <Cartao cabecalho="22/04/2026">
          <Pedido
            data="15/06/2024"
            icone="alarm-clock"
            titulo="Despertador Analógico"
            descricao="Um despertador analógico" />
          {componenteFeedback}
        </Cartao>

      </div>
      <div className="col-sm-12 col-lg-6 col-xxl-3">
        <Cartao>
          <Pedido data="17/05/2024"
            icone="shirt"
            titulo="Camisa"
            descricao="Uma camisa preta" />
          {componenteFeedback}
        </Cartao>
      </div>
      <div className="col-sm-12 col-lg-6 col-xxl-3">
        <Cartao>
          <Pedido data="14/06/2024"
            icone="bowling-ball"
            titulo="Bola de boliche"
            descricao="Uma bola de boliche" />
          {componenteFeedback}
        </Cartao>
      </div>
      <div className="col-sm-12 col-lg-6 col-xxl-3">
        <Cartao>
          <Pedido data="15/06/2024"
            icone="bicycle"
            titulo="Bicicleta"
            descricao="Bicicleta 18 marchas" />
          {componenteFeedback}
        </Cartao>
      </div>
    </div>
  </div>
}


export default App