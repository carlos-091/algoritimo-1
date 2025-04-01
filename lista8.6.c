#include<stdio.h>

int main()
{
  int A[10]={1,2,3,4,5,6,7,8,9,10},x,y,tem;

  printf("digiter a posicao X:");
  scanf("%d",&x);

  printf("digiter a posicao Y:");
  scanf("%d",&y);

  if((x>=0)&&(x<10)&&(y>=0)&&(y<10))
  {
     tem=A[x];
     A[x]=A[y];
     A[y]=tem;

     printf("valor depois da trocar");
     for(int i=0;i<10;i++)
     {
       printf("\n%d",A[i]);

     }
  }

  else
  {
     printf("posicao invalida");
  }
  return 0;
}
