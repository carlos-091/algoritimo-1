#include <stdio.h>
int main()
{
int idade, peso;

printf("vamos ver se voce poder doar sangue");
printf("\n\npor favor diga a sua idade:");
scanf("%d",&idade);
printf("\n\npor favor diga o seu peso:");
scanf("%d",&peso);

  if((idade >= 18) && (idade <= 69) && (peso >= 50)){
    printf("\nvoce poder doar sangue");
    }
  else {
    printf("\nvoce nao poder doar sangue");

  }
return 0;
}
