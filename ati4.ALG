Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/03/2023
Var
// Se��o de Declara��es das vari�veis 
peso,quant,grama,sobra:real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva("Digite o peso total do saco de ra��o para os gatos: (em kg)")
leia(peso)
escreval("")
escreva("Digite a quantidade de ra��o para os gatos: (em gramas)")
leia(quant)
escreval("")
grama <- peso * 1000
sobra <- (quant*5)
escreva("A quantidade de ra��o que sobrou no saco depois de 5 dias foi de ",sobra,"Gramas")
escreval("")

Fimalgoritmo