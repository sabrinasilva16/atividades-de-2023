Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 24/03/2023
Var
// Se��o de Declara��es das vari�veis 
a,b,c:real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
 escreval("Digite o valor da primeira variavel")
 leia(a)
 escreval("Digite o valor da segunda variavel")
 leia(b)
 escreval("Digite o valor da terceira variavel")
 leia(c)
 enquanto (a = b) ou (b = c) ou (a = c) faca
               escreval("Erro de digita��o!! Os n�meros tem que ser diferentes")
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