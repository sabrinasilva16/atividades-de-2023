Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/03/2023
Var
// Se��o de Declara��es das vari�veis 
 nac,ano,anos1,anos2,anos3:inteiro
 anos4:real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
 escreval("Digite ano de nacimento")
 leia(nac)
 escreval("Digite ano que estamos")
 leia(ano)
 
 anos1<-ano-nac
 escreval("Sua idade �",anos1 , "anos")
 anos2<-anos1*12
 escreval("Sua idade em meses �",anos2)
 anos3<-anos2*30
 escreval("Sua idade em dias �",anos3)
 anos4<-anos3/7
 escreval("Sua idade em semanas �",anos4)
 
Fimalgoritmo