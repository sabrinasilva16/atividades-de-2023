Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/03/2023
Var
// Seção de Declarações das variáveis 
peso,quant,grama,sobra:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite o peso total do saco de ração para os gatos: (em kg)")
leia(peso)
escreval("")
escreva("Digite a quantidade de ração para os gatos: (em gramas)")
leia(quant)
escreval("")
grama <- peso * 1000
sobra <- (quant*5)
escreva("A quantidade de ração que sobrou no saco depois de 5 dias foi de ",sobra,"Gramas")
escreval("")

Fimalgoritmo