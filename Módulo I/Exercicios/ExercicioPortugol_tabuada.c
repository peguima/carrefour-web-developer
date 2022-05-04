#include <stdio.h>

//O exercício em questão é a montagem de uma tabuada. Ele foi adaptado para sua realização em linguagem C.

int main(void) {
  
  int numero;
  int contador;
  int limite;
  int resultado;

  contador = 0;
  limite = 10;

  printf("Tabuada em C:\n\n");

  printf("Digite um número de 1 a 10 para que o programa mostre a sua tabuada completa:\n");
  scanf("%d", &numero);

  if(numero<=10){
    do{
      resultado = numero * contador;
        printf("%d X %d = %d\n", numero, contador, resultado);
      contador ++;
              }while(contador<=limite);
}
  else{
    printf("Opção inválida. Reinicie o programa e digite um número entre 1 e 10.");
  }
  
  return 0;
}