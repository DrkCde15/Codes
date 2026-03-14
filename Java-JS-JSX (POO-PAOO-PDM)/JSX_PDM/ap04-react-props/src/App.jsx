import Pedido from "./Pedido"
import Cartao from "./Cartao"
import Feedback from "./Feedback"
const App = () => {
  const textoOK = 'Já chegou'
  const textoNOK = 'Não chegou ainda'
  const funcaoOK = () => alert('Obrigado pelo feedback')
  const funcaoNOK = () => alert('Verificaremos')
  const componenteFeedback = (
    <Feedback 
      textoOK={textoOK}
      textoNOK={textoNOK}
      funcaoOK={funcaoOK}
      funcaoNOK={funcaoNOK}/>
  )
  return (
    <div className="container border">
      <div className="row">
        <div className="col-12">
          <i className="fa-solid fa-hippo fa-2x"></i>
        </div>
      </div>
      <div className="row">
        <div className="col-sm-12 col-md-6 col-xl-3 ">
          <Cartao cabecalho="22/04/2024">
            <Pedido 
              icone="book"
              titulo="Livro"
              descricao="Um livro bom..."/>
              {componenteFeedback}
          </Cartao>
        </div>
        <div className="col-sm-12 col-md-6 col-xl-3 ">
          <Cartao cabecalho="14/04/2022">
            <Pedido 
              icone="bicycle"
              titulo="Bicicleta"
              descricao="Bicicleta 18 marchas"/>
              {componenteFeedback}
          </Cartao>
        </div>
        <div className="col-sm-12 col-md-6 col-xl-3 ">
          <Cartao cabecalho="11/11/2024">
            <Pedido 
              icone="hippo"
              titulo="Hipopótamo"
              descricao="Um hipo filhote"/>
              {componenteFeedback}
          </Cartao>
        </div>
        <div className="col-sm-12 col-md-6 col-xl-3">
          <Cartao cabecalho="22/04/2024">
            <Pedido
              icone="camera"
              titulo="Camera"
              descricao="Camera 4K"/>
              {componenteFeedback}
          </Cartao>
        </div>
      </div>
      
    </div>
  )
}

export default App