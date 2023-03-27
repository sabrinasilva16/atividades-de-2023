Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/03/2023
Var
// Seção de Declarações das variáveis 
altura,peso,sexo:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite a altura da pessoa:")
leia (altura)
escreva("Digite o sexo da pessoa(1 para feminino e 2 para masculino):")
leia(sexo)

  se sexo = 1 entao
   peso <- (64.1 * altura) - 44.7
  senao
   peso <- (72.7 * altura) - 58
  fimse
  
escreva("O peso ideal da pessoa é:" ,peso)

Fimalgoritmo