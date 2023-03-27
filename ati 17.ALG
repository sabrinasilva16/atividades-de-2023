Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 24/03/2023
Var
// Seção de Declarações das variáveis 
a,b,c:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
 escreval("Digite o valor da primeira variavel")
 leia(a)
 escreval("Digite o valor da segunda variavel")
 leia(b)
 escreval("Digite o valor da terceira variavel")
 leia(c)
 enquanto (a = b) ou (b = c) ou (a = c) faca
               escreval("Erro de digitação!! Os números tem que ser diferentes")
               escreval()
               escreval("Digite novamente a primeira variavel")
               leia(a)
               escreval()
               escreval("Digite novamente a segunda variavel")
               leia(b)
               escreval()
               escreval("Digite novamente a terceira variavel")
               leia(c)
               escreval()
 fimenquanto
                         se (a<b) e (a<c) entao
                             se (b<c) entao
                             escreva(a,c,b)
                             fimse
                              senao
                              
                                se (b<a) e (c<b) entao
                                  se (a<b) entao
                                  escreva(c,a,b)
                                   senao
                                   escreva(c,b,a)
                                   fimse
                                  fimse
                                fimse





Fimalgoritmo