Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2023
Var
// Se��o de Declara��es das vari�veis 
soma,numero,quantidade:inteiro
media:real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
 soma <- 0
  quantidade <- 0
  escreva("Digite um n�mero: ")
  leia(numero)
  enquanto numero <> 0 faca
     se numero mod 2 = 0 entao
        soma <- soma + numero
        quantidade <- quantidade + 1
    fimse
    escreva("Digite um n�mero: ")
    leia(numero)
  fimenquanto
  se quantidade > 0 entao
     media <- soma / quantidade
         escreval("A m�dia dos n�meros pares �: ", media)
     senao
         escreval("Nenhum n�mero par foi digitado.")
     fimse
Fimalgoritmo
