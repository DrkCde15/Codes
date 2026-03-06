import Cartao from "./Cartao"
import Feedback from "./Feedback"
import Comentario from "./Comentario"
import ListaComentarios from "./ListaComentarios"

const App = () => {
  const textoOK = "Aprovar"
  const textoNOK = "Não aprovar"
  const funcaoOK = () => alert('Comentário aprovado!')
  const funcaoNOK = () => alert('Comentário reprovado.')
  
  const componenteFeedback = (
    <Feedback 
      textoOK={textoOK}
      textoNOK={textoNOK}
      funcaoOK={funcaoOK}
      funcaoNOK={funcaoNOK}
    />
  )

  return (
    <ListaComentarios>
      <div className="col-12 mb-3">
        <Cartao cabecalho="Mary.Lockman69">
          <Comentario
            icone="user-ninja"
            nome="Mary.Lockman69"
            dataHora="6:52:40 PM"
            texto="Tempora et rerum culpa vel illo. Quia velit esse. Quaerat sint optio voluptas quam autem dolorem id cumque." 
          />
          {componenteFeedback}
        </Cartao>
      </div>

      <div className="col-12 mb-3">
        <Cartao cabecalho="Brock_Reichel18">
          <Comentario
            icone="user-tie"
            nome="Brock_Reichel18"
            dataHora="6:52:40 PM"
            texto="Necessitatibus molestiae error est vel beatae sunt corporis repudiandae. Consequatur enim ut et blanditiis." 
          />
          {componenteFeedback}
        </Cartao>
      </div>

      <div className="col-12 mb-3">
        <Cartao cabecalho="Nils_Steuber">
          <Comentario
            icone="user-astronaut"
            nome="Nils_Steuber"
            dataHora="6:52:40 PM"
            texto="Ullam quaerat et quam ut. Eaque quis et rerum corporis quisquam rem sit modi et. Cupiditate corrupti." 
          />
          {componenteFeedback}
        </Cartao>
      </div>
    </ListaComentarios>
  )
}

export default App
