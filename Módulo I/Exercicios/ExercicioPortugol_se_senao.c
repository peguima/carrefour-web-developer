#include <stdio.h>

int main(void) {
  
  // As situações apresentadas no bootcamp são aqui traduzidas em um código C que funciona com a mesma lógica. O primeiro exemplo é o de "se-senao":

  int app=0;

  printf("Apps disponíveis: \n\n");

  printf("Digite 1 para Netflix, 2 para Amazon Prime e 3 para HBO Max:");
  scanf("%d", &app);

  if(app==1){
    printf("Ok! Abrindo Netflix...");
  }

  if(app==2){
    printf("Ok! Abrindo Amazon Prime...");
  }

  if(app==3){
    printf("Ok! Abrindo HBO Max...");
  }

  if(app>=4){
    printf("Você deve escolher 1, 2 ou 3 para uma opção válida...");
  }  

  //Agora, o mesmo exemplo, mas seguindo a lógica do "caso". Para tal exemplo, utiliza-se o mesmo "int" já expressado pelo código, mas repete-se a questão para que se prove, de forma separada, os dois comandos:

  printf("Apps disponíveis: \n\n");

  printf("Digite 1 para Netflix, 2 para Amazon Prime e 3 para HBO Max:");
  scanf("%d", &app);

  switch(app){
    case 1:
      printf("Ok! Abrindo Netflix...");
    break;
    case 2:
      printf("Ok! Abrindo Amazon Prime...");
    break;
    case 3:
      printf("Ok! Abrindo HBO Max...");
    break;
    default:
      printf("Você deve escolher 1, 2 ou 3 para uma opção válida...");
    break;
  }
  
  return 0;
}