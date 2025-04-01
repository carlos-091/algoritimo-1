#include <stdio.h>
  int main()
  {
  int dia, mes, ano;

  printf("diga o dia do seu nascimento:");
  scanf("%d",&dia);
  printf("\ndiga o mes do seu nascimento:");
  scanf("%d",&mes);
  printf("\nfale o ano do seu nascimento:");
  scanf("%d",&ano);
  if ((dia <= 31) && (mes <= 12) && (ano <= 2024)){
      printf("\niso e uma data valida");
  }
  else{
      printf("\npor favor faler uma data valida");
  }
     return 0;
  }
