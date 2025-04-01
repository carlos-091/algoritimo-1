#include<stdio.h>

int main()
{
  int n_1=0,n_2,re;

  printf("diga nⁿ do n-esimo:");
  scanf("%d",&n_1);

  printf("diga nⁿ-¹ do n-esimo:");
  scanf("%d",&n_2);

  re=n_1-n_2;

  printf("esse e o n-esimo:%d",re);

  return 0;
}
