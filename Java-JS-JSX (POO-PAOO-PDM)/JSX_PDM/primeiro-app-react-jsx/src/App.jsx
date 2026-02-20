// import './styles.css'

export default () => {
  const estilosBotao = {paddingTop: 12, paddingTop: 8, paddingBottom: 8, backgroundColor: 'blueviolet', color: 'white', border: 'none', width: '100%', borderRadius: 8}
  const textoDoRotulo = "Nome:"
  const textoDoBotao = () => {"Enviar"}
  const aoClicarNoBotao = () => {alert("Botão clicado!")}

  return (
    <div style={{margin: 'auto', width: 768, backgroundColor: '#f0f0f0', padding: 12, borderRadius: 8}}>
      <label htmlFor="campoNome" style={{display: 'block', paddingBottom: 8}}>{textoDoRotulo}</label>
      <input id="campoNome" type="text" style={{paddingTop: 8, paddingBottom: 8, borderStyle: 'hidden', width: '100%', borderRadius: 8, outline: 'none'}} />
      <button style={estilosBotao} onClick={aoClicarNoBotao}>{textoDoBotao()}</button>
    </div>
  )
}