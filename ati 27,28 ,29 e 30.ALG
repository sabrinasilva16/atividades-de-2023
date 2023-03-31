Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2023
Var
// Seção de Declarações das variáveis 
numero,maior,menor:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
  escreva("Digite um número: ")
   leia(numero)
   maior <- numero
   menor <- numero
   enquanto numero <> 0 faca
        escreva("Digite um número:")
        leia(numero)
        se numero > maior entao
           maior <- numero
        fimse
        se (numero < menor) e (numero <> 0) entao
            menor <- numero
        fimse
   fimenquanto
   escreval("O maior número digitado foi: ", maior)
   escreval("O menor número digitado foi: ", menor)

Fimalgoritmo