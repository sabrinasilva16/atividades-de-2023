Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2023
Var
// Seção de Declarações das variáveis 
soma,numero,quantidade:inteiro
media:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
 soma <- 0
  quantidade <- 0
  escreva("Digite um número: ")
  leia(numero)
  enquanto numero <> 0 faca
     se numero mod 2 = 0 entao
        soma <- soma + numero
        quantidade <- quantidade + 1
    fimse
    escreva("Digite um número: ")
    leia(numero)
  fimenquanto
  se quantidade > 0 entao
     media <- soma / quantidade
         escreval("A média dos números pares é: ", media)
     senao
         escreval("Nenhum número par foi digitado.")
     fimse
Fimalgoritmo
