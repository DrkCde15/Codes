/*AULA 5*/

//PROCESSAMENTO ASSINCORNA PODE USAR O Promises
//Promises
//EXEMPLO 02
//1 + 2 + 3 ... + n-2 + n-1 + n
//Verifique o valor de n
//Se for negativo devolva um promise ja rejected que da acesso ao texto "Somente valores positivos, por favor"
//Caso contrário, desenvolva a promise que ja temos no momento
// const calculoRapidinho = (n) => {
//     if(n < 0){
//         return Promise.reject("Somente valores positivos, por favor:")
//     } else {
//         return Promise.resolve((n / 2) * (n + 1))
//     }    
// }

// const minhaPromise = calculoRapidinho(10)
// minhaPromise.then(res => 
//     console.log(`Resultado: ${res}`)
// )

// .catch(err =>{
//     console.log(`Erro: ${err}`)
// })
// .finally(() => console.log('Terminando1...'))

// const minhaPromise2 = calculoRapidinho(-10)
// minhaPromise2.then(res => 
//     console.log(`Resultado: ${res}`)
// )

// .catch(err =>{
//     console.log(`Erro: ${err}`)
// })
// .finally(() => console.log('Terminando2...'))

//EXEMPLO 01
// function calculoDemorado(n) {
//     const p = new Promise(function(resolve,  reject){
//         let ac = 0
//         for(let i = 1; i <= n; i++) ac += i
//         resolve(ac)
//     })
//     return p
// }

// const minhaPromise = calculoDemorado(10)
// minhaPromise.then((res)=> {
//     console.log(`Resultado: ${res}`)
// })

/*------------------------------------------ */



/*AULA 4*/

//PROCESSAMENTO ASSÍNCRONA
//async/await

//Inferno de callbacks/código hadouken
// const fs = require('fs')
// const abrirArquivo = function(nomeArquivo) {
//     const exibirConteudo = function(erro, conteudo){
//         if(erro)
//             console.log(`Erro: ${erro}`)
//         else {
//             console.log(`Conteúdo: ${conteudo.toString()}`)
//             const dobro = Number(conteudo.toString()) * 2
//             const finalizar = (erro) => {
//                 if(erro)
//                     console.log(`Erro na escrita: ${erro}`)
//                 else
//                     console.log(`Escreveu com sucesso`)
//             }
//             fs.writeFile('dobro.txt', dobro.toString(), finalizar)
//         }
//     }
//     fs.readFile(nomeArquivo, exibirConteudo)
//     console.log('Fazendo outras coisas...')
// }
// abrirArquivo('Arquivo.txt')

/*------------------------------------------ */

//PROCESSAMENTO SINCRONA E ASSINCRONA
// function demorada(){
//     const dataAtualMais2Segundos = new Date().getTime() + 2000
//     while(new Date().getTime() <= dataAtualMais2Segundos);
//     const d = 2 + 5
//     return d
// }
// const a = 2 + 3
// const b = 8 + 9
// setTimeout(() => {
//     const d = demorada()
//     console.log(`Demorada: ${d}`)
// }, 0)
// const e = a + b + 5
// const atualMais10 = new Date().getTime() + 10000
// while (new Date().getTime() <= atualMais10);
// console.log(e)

/*------------------------------------------ */

//PROCESSAMENTO SINCRONA/BLOQUEANTE
//EXEMPLO 2
// const a = 2 + 7
// const b = 6 + 7
// cosole.log(a+b)

//EXEMPLO 1
// console.log('Eu primeiro')
// console.log('Depois eu')
// console.log('Serei sempre a última...:(')

/*------------------------------------------ */



/*AULA 3*/
//OBJETOS JavaScript LITERAIS (JSON: Javascript Object Notation)
//EXEMPLO 5. 
//Ter a operação somar, que soma dois válores, implementada com uma arrow function que não usa return.
//Ter a operação subtrair, que subtrai dois válores, implementada com uma function regular
// let calculadora = {
    //Operação de somar usando uma arrow function
    // somar: (a, b) => a + b,
    //Operação de subtrair usando uma function regular
    // subtrair: function(a, b) {
    //     return a - b
        //pode ser usado return this.somar(a, -b)
//     }
// }

// console.log(calculadora.somar(2, 2))
// console.log(calculadora.subtrair(5, 5))


/*EXEMPLO 4. Representar: Uma concessionária tem CNPJ e endereço, com rua, numero e bairro.
Ela possui alguns carros em estoque. Cada carro tem marca, modelo e ano de fabricação*/
// let concessionaria = {
//     nome: 'C1',
//     cnpj: '123456789',
//     endereco: {
//         logradouro: 'Rua B',
//         numero: 11,
//         bairro: 'Vila j'
//     },
//     estoque: [
//         {
//             marca: 'Vw',
//             modelo: 'Gol',
//             ano: 2000
//         },
//         {   
//             marca: 'GM',
//             modelo: 'Corsa',
//             ano: 2005
//         }
//     ]
// }
//exibir modelo corsa
// console.log(concessionaria.estoque[1].modelo)
//com um for, ir mostrando o modelo de cada veículo. Pesquisar sobre o for/of no site mdn
// for (let veiculos of concessionaria.estoque) {
//     console.log(veiculos.modelo)
// }


//EXEMPLO 3. Por que usa o [] (exemplo forms): quando tem espaço em branco

// let pessoa = {
//     'Seu nome' : 'Alicia'
// }
// console.log(pessoa['Seu nome'])


//EXEMPLO 2. Representar: Uma pessoa chamada maria com 21 anos e mora na rua B, número 64
// let pessoa = {
//     nome: 'Maria',
//     idade: 21,
//     endereco: {
//         logradouro: 'Rua B',
//         numero: 64
//     }
// }

// console.log(pessoa.endereco.logradouro)
// console.log(pessoa['endereco']['numero'])
// console.log(pessoa.endereco['logradouro'])
// console.log(pessoa['endereco'].numero)


//EXEMPLO 1. Representar: Uma pessoa que se chama joão e tem 17 anos
// let pessoa = {
//     nome: 'João',
//     idade: 17
// }
// //os dois jeitos de acessar os valores do objeto
// console.log(pessoa.nome);
// console.log(pessoa['idade'])

/*------------------------------------------ */

//CLOSURES
//EXEMPLO 3
// function eAgora(){
//     let cont = 1
//     function f1(){
//         console.log(cont)
//     }
//     cont++
//     function f2(){
//         console.log(cont)
//         cont++
//     }
//     cont++

//     return [f1, f2]
// }
// let funcoes = eAgora()
// funcoes[0]()
// funcoes[1]()


//EXEMPLO 2
// function ola(){
//     let nome = 'João'
//     return function(){
//         console.log(`Olá ${nome}`)

//     }
// }

// const res = ola()
// res()


//EXEMPLO 1
//FUNÇÃO (CIDADAM DE PRIMEIRA CLASSE)
// function f(){
//     let nome = 'João'
//     function g(){
//         let a
//         console.log(nome)
//     }
//     g()
// }
// f()

/*------------------------------------------ */



/*AULA 2*/

//FUNÇÃO DE ALTA ORDEM (CHAMANDO UMA FUNÇÃO DENTRO DE OUTRA FUNÇÃO)
// function f (funcao){
//     console.log('f')
//     funcao()()()
//     return () => console.log('i')
// }

// function g(){
//     console.log('g')
//     return function(){
//         console.log('Fui criada por g')
//         return () => {console.log('h'); return () => 'k'}
//     }
// }

// f(g())()

/*------------------------------------------ */

//FUNÇÃO PODE SER ATRIBUIDA EM UMA VARIAVEL
// let umaFuncao = function(){
//     console.log('sou uma função')
// }
// umaFuncao()

/*-------------------------------------- */

//TIPOS DE FUNÇÕES
//Funções regulares e arrow functions

//ARROW FUNCTIONS
//Exemplo 4 
    // const ehPar = n => n % 2 === 0

//Exemplo 3
    // const f = () => {
    //     (return) //ERRO DE SINTAXE
    //     (2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 )
    // }
    // console.log(f())

//Exemplo 2 (sem usar return (quando n usa chaves (TEM APENA 1 INSTRUÇÃO PRA OMITIR A {} )))
    // const dobro = n => n * 2
    // console.log(dobro(5))

//Exemplo 1
        // const hello = () => console.log('Hello')
        // hello()

        // const helloNome = (nome, idade) => console.log('Oi, ' + nome + ' você tem ' + idade + ' ?')
        // helloNome('henrique', 19)

//FUNÇÃO REGULAR
//Exemplo 4 de função (parâmetros com valore padrão)
    // const triplo = function (n = 5){
    //     return 3 * n
    // }
    // console.log(triplo(6))
    // console.log(triplo(undefined))

//Exemplo 3 de função anôima (sem nome)
    // cont dobro function(n){
    //      return 2 *n
    // }
    // console.log(dobro(3))

//Exemplo 2
    // function somar(a,b){
    //     return a + b
    // }
    // console.log(somar(1, 2))

//Exemplo 1
    // function hello(){
    //     console.log('oi')
    // }
    // hello()

    // function hello(nome){
    //     console.log('Oi, ' + nome)
    // }
    // hello('Ana')

/*-----------------------------------------------*/

///USO DA FUNÇÃO/MÉTODO "REDUCE" serve para reduzir um array um único valor, nesse caso para calcular a soma dos elementos do array.
// const numeros = [1, 2, 3, 4]
// const soma =numeros.reduce((ac, v) => ac + v)
// console.log(soma)

/*------------------------------------------------*/

//USO DA FUNÇÃO/MÉTODO "SOME" nesse caso verifica se ALGUM (PELO MENOS UM) começa com a ou A
// const nomes = ['Ana', 'João', 'Rodrigo', 'Angelica']
// const resultado = nomes.some(n => n[0] === 'A' || n[0] === 'a')
// console.log(resultado)

/*--------------------------------------------------*/

//USO DA FUNÇÃO/MÉTODO "EVERY" nesse caso verifica se TODOS começa com A ou a
// const nomes = ['Ana', 'João', 'Rodrigo', 'Angelica']
// const resultado = nomes.every(n => n[0] === 'A' || n[0] === 'a')
// console.log(resultado)

/*------------------------------------------------------*/

//USO DA FUNÇÃO/MÉTODO 'map' cria um novo array onde nesse caso cada valor é multiplicado pelo índice do elemento + 2.
// let m = 1 (não utilizado)
// const numeros = [1, 2, 3,]
// console.log(numeros.map((valor, indice, numeros) => valor * (indice +2)))

/*DADO ESSE VETOR, PRODUZIR OUTRO. ELE DEVE CONTER A LETRA
INICIAL DE CADA NOME, NA SUA POSIÇÃO ORIGINAL.*/
//Utilizando a função map
// const nomes = ['Ana', 'João', 'Rodrigo', 'Angelica']
// const listaResultante = nomes.map(x => x[0])
// console.log(listaResultante)



/*AULA 1*/

// FEITO MAIS PRA CIMA
// [A, J, R, A]
// const nomes = ['Ana', 'João', 'Rodrigo', 'Angelica']
// const resultado = []
// console.log(resultado)

/*--------------------------------------------------------------*/

//DADO ESSE VETOR, CONTRUA OUTRO. ELE DEVE CONTER APENAS OS NOMES QUE COMEÇAM COM A LETRA A.
//Jeito 1 de resolver usando metodo 'filter'
// const nomes = ['Ana', 'João', 'Rodrigo', 'Angelica']
// const resultado = nomes.filter(n => {return n[0] === 'A'})
// console.log(resultado)

//Jeito 2 de resolver usando for com metodo 'push'
// const resultado = []
// for (let i = 0; i< nomes.length; i++) {
//     if (nomes [i][0] === 'A') {
//         resultado.push(nomes[i]);
//     }
// }
// console.log(resultado)

/*--------------------------------------------------------------*/

//VETORES
// v1 = []
// console.log(v1.length)
// v1[0]= 'abc'
// console.log(v1.length)
// v1[10] = 2
// console.log(v1.length)
// console.log(v1)
// for(let i = 0; i < v1.length; i ++)
//     console.log(v1[i])

/*--------------------------------------------------------------*/

//COMPARAÇÃO POR IGUALDADE: == (implicito) === (explicito 'recomendado')
// console.log(1 == 1)
// console.log(1 === 1)
// console.log(1 == '1')
// console.log(1 === '1')
// console.log(true == 1)
// console.log( true === 1)
// console.log(1 == [1])
// console.log(1 == [])
// console.log(1 == [0])
// console.log(1 == [0, 1])
// console.log(1 == [1, 0])
// console.log(3 == [3])
// console.log(null == null)
// console.log(null === undefined)
// console.log(null == undefined)
// console.log([] == false)
// console.log([] == [])
// console.log(null == 0)
// console.log(false == 0)

/*--------------------------------------------------------------*/

//Coerção implícita 
// const n1 = 2
// const n2 = '3'
// const n3 = n1 + n2
// console.log(n3)

//Coerção expícita
// const n4 = n1 + Number(n2)
// console.log(n4)

/*--------------------------------------------------------------*/

//DECLARAÇÃO DE VARIÁVEIS E CONSTANTES
// let, const e var
// let: pode mudar o valor da variavel
// const: não pode mudar o valor da variavel
// var: não recomendado a usar

// let a = null
// let b = undefined

// var idade = 18
// let nome = 'Ana'
// console.log ('Você tem ' + idade + ' anos')
// console.log('Oi, ' + nome)
// //hoist: içamento
// if(idade >= 18){
//   console.log(nome + ', você pode dirigir')
// }
// console.log('Tchau, ' + nome)

// var linguagem = 'javascript'
// var linguagem = 'java'

// const pi = 3.14
// pi = 3.141 (erro, pois uma variável const não pode mudar o valor)

// let name = 'João'
// nome = 'João Silva' (permitido, pois uma várivel let pode mudar valor)
// const idade = 19
// console.log(nome + " tem " + idade + " anos")

// const n = 1
// n++ // n = n + 1 (Não pode pois "n" é uma variável to tipo const, se fosse let poderia)
// const nome = 'João'
// nome = 'João Silva'
// const idade = 19

/*--------------------------------------------------------------*/

// js usa sistema de tipos dinâmico
// java usa sistema de tipos estáticos

// Sistema de tipos estático: Java, c, c++, 
// Sistma de tipos dinâmico: javascript, python, php, perl, ruby
// Sistem de tipo gradual: c#, Dart, Typescript, Kotlin

/*---------------------------------------------------------------*/

//DECLARA UMA VARIAVEL "a" COM UM STRING E PASSA PARA MAIUSCULO
// let a = "abc"
// a = a.toUpperCase()
// console.log(a)

//ERRO, NÃO SE DECLARA UMA STRING DESSA MANEIRA
// String s = "abc";
// s.toUpperCase();
// s.falar(); //ERRO PORQUE STRINGS NÃO TÊM UM MÉTODO 'falar'

//ERRO, POIS NÃO SE DECLARA UMA VARIÁVEL COM int EM JS
// int a; 

//PODE, POIS EM JS PODE RETRIBUIR UMA VARIÁVEL DE UM TIPO PRO OUTRO 
// a = 2;
// a = "abc";
// a.falar(); //ERRO PORQUE STRINGS NÃO TÊM UM MÉTODO 'falar'

//EXEMPLO DE TypeScript
//SE VOCÊ TENTAR ATRIBUIR UM VALOR DE UM TIPO DIFERENTE À VARIÁVEL A DEPOIS, IRA DAR ERRO
// let a: number = 2
// a.falar() //ERRO: 'falar' NÃO É UM MÉTODO VÁLIDO PARA O TIPO 'NUMBER'