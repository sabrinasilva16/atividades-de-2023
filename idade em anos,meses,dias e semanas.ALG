Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/03/2023
Var
// Seção de Declarações das variáveis 
 nac,ano,anos1,anos2,anos3:inteiro
 anos4:real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
 escreval("Digite ano de nacimento")
 leia(nac)
 escreval("Digite ano que estamos")
 leia(ano)
 
 anos1<-ano-nac
 escreval("Sua idade é",anos1 , "anos")
 anos2<-anos1*12
 escreval("Sua idade em meses é",anos2)
 anos3<-anos2*30
 escreval("Sua idade em dias é",anos3)
 anos4<-anos3/7
 escreval("Sua idade em semanas é",anos4)
 
Fimalgoritmo