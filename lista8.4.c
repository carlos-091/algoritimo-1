
#include<stdio.h>

int main()
{
  int n,rev=0,num,dig;

  printf("escolha um numero inteiro:");
  scanf("%d",&n);

  num=n;


    while(num != 0)
    {
      dig=num%10;
      rev=rev*10+dig;
      num=num/10;
    }


  printf("o reverso  de %d e:%d",n,rev);

  return 0;
}
