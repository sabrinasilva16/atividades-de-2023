Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/03/2023
Var
// Se��o de Declara��es das vari�veis 
altura,peso,sexo:real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva("Digite a altura da pessoa:")
leia (altura)
escreva("Digite o sexo da pessoa(1 para feminino e 2 para masculino):")
leia(sexo)

  se sexo = 1 entao
   peso <- (64.1 * altura) - 44.7
  senao
   peso <- (72.7 * altura) - 58
  fimse
  
escreva("O peso ideal da pessoa �:" ,peso)

Fimalgoritmo