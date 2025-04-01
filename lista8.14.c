#include<stdio.h>

int main()
{
  int soma,m[3][3];


  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("escolha um numero pra coluna %d e linha %d:",i+1,j+1);
      scanf("%d",&m[i][j]);

    }
  }

  printf("ordem crescente");

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      if(i==j)
      {
        soma +=m[i+1][j];
      }
    }
  }
  printf("essa a soma abaixo da diagonal principal:%d",soma);

  return 0;
}
