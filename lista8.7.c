#include<stdio.h>

int main()
{
  int vet[]={1,2,3,4,5,6,7,8,9,10},al;

  printf("escolha um numero pra se alvo:");
  scanf("%d",&al);

  for(int i=0;i<10;i++)
  {
    if(vet[i]==al)
    {
      printf("alvo encontrando");
    }
  }

  return 0;
}
