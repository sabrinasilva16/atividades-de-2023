Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 28/03/2023
Var
// Seção de Declarações das variáveis 
aluno:vetor[1..10] de real
n1:real
n2:real
i:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
 para i de 1 ate 10 faca
 escreval("Aluno ",i)
 escreva("Nota 1 = ")
 leia(n1)
 escreva("Nota 2 = ")
 leia(n2)
 aluno[i] <- (n1+n2)/2
 escreval()
 fimpara
 
 escreval("Media")
 escreval()
 
 para i de 1 ate 10 faca
 escreval("Aluno ",i,"=" ,aluno[i])
 fimpara
 

Fimalgoritmo