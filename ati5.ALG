Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/03/2023
Var
// Seção de Declarações das variáveis 
a,b,c:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite o número da Primeira variável: ")
leia(a)
escreval("")
escreva("Digite o número da Segunda variável: ")
leia(b)
escreval("")
escreval("O valor da variável A é: ", a, " O valor da variável B é: ",b )
c <- a
a <- b
b <- c
escreval("")
escreval("O valor da variável A agora é: ",a, " O valor da variável B agora é: ",b)

Fimalgoritmo