#include <stdio.h>

//O código é uma adaptação do que foi ensinado no módulo "Lógica de Programação" em linguagem C, ao invés do uso do Portugol.
//O exercício era realizar a média salarial de um funcionário com base no seus ganhos nos primeiros quatro meses do ano.

int main(void) {
  char nome;
  float janeiro=0;
  float fevereiro=0;
  float marco=0;
  float abril=0;
  float media=0;
  
  printf("Calculadora de média salarial\n\n");
  printf("Digite o nome do funcionário:\n");
  scanf(" %c", &nome);
  printf("Digite o salário de Janeiro:\n");
  scanf(" %f", &janeiro);
  
  printf("Digite o salário de Fevereiro:\n");
  scanf(" %f", &fevereiro);
  
  printf("Digite o salário de Março:\n");
  scanf(" %f", &marco);
  
  printf("Digite o salário de Abril:\n");
  scanf(" %f", &abril);

  media = (janeiro+fevereiro+marco+abril)/4;
    printf("A média de %c é: R$%.2f", nome, media);
  
  return 0;
}