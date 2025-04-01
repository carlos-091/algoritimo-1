#include<stdio.h>

int main()
{
  int n,con=0,num;

  printf("escolha um numero inteiro:");
  scanf("%d",&n);

  num=n;

  if(num == 0)
  {
    con=1;
  }
  else
  {
    while(num != 0)
    {
      num=num/10;
      con++;
    }
  }

  printf("a quantidade de algarismo de %d e:%d",n,con);

  return 0;
}
