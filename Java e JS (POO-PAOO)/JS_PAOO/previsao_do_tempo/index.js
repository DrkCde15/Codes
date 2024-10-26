require('dotenv').config()
const axios = require('axios')

//ISSO FOI FEITO EMBAIXO USANDO DESESTRUTURAÇÃO
// const PROTOCOL = process.env.PROTOCOL
// const BASE_URL = process.env.BASE_URL

const { 
    PROTOCOL,
    BASE_URL,
    Q,
    APPID,
    CNT,
    UNITS,
    DESIRED_LANGUAGE
} = process.env

/*Montar essa URL usando intepolação, ou seja, 
delimite a string com crase e use o operador ${}*/
const vai = async () => {
    const url = `${PROTOCOL}://${BASE_URL}?q=${Q}&appid=${APPID}&cnt=${CNT}&units=${UNITS}&lang=${DESIRED_LANGUAGE}`
    const resultado = await axios.get(url)
    //console.log(resultado.data)
    for (let previsao of resultado.data.list) {
        console.log(`
            Data: ${new Date(previsao.dt * 1000).toLocaleString()},
            Temp min: ${previsao.main.temp_min}\u00B0,
            Temp max: ${previsao.main.temp_max}\u00B0,
            Umidade: ${previsao.main.humidity}%,
            Descrição: ${previsao.weather[0].description}
        `)
    }
}

vai()
axios.get(url)
    .then((res) => {
    //Exibir o seguinte texto:
    //Total de previsões: 4
    console.log(`Total de previsões: ${res.data.cnt}`)
    //console.log(res.data)
    console.log ('=====================')
    return res.data
})
.then((res) => {
    //mostrar a sensação térmica da primeira previsão do tempo
    for(let previsao of res.list) {
        console.log(`Sensação térmica: ${previsao.main.feels_like}`)
    }
    console.log('======================')
    return res
})
.then((res) => {
    for(let previsao of res.list){
        console.log(new Date(previsao.dt * 1000).toLocaleString())
        console.log('======================')
        return {sunrise: res.city.surise, sunset: res.city.sunset}
    }
})
.then((res) => {
    console.log (`Nascer do Sol: ${new Date (res.sunrise * 1000).toLocaleString()}`)
    console.log(`Pôr do Sol:  ${new Date (res.sunset * 1000).toLocaleString()}}`)
})