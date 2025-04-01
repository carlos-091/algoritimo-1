#include <stdio.h>
int main()
{
  int n,i=1,soma,media,menor,idade;

  printf("por favor digiter a idade das pessoas que deseja verificar:");
  scanf("%d",&n);

  do
  {
    printf("digiter a idade da %d pessoa:",i);
    scanf("%d",&idade);

    if(idade >= 18)
    {
      soma += idade;
    }

    else
    {
        menor += idade;
    }

    i++;
  }while(i <= n);

  media = menor/n;

  printf("essa e a soma da idade dos de maiores:%d",soma);

  printf("\nessa e a media da idade dos de manores:%d",media);

  return 0;
}
