#include<stdio.h>

int main()
{
  int veta[10]={0,1,2,3,4,5,6,7,8,9};


  for(int i=0;i<10;i++)
  {
    for(int j=i+1;j<10;j++)
    {
      if(veta[i] < veta[j])
      {
        veta[i]=veta[i]+veta[j];

        veta[j]=veta[i]-veta[j];

        veta[i]=veta[i]-veta[j];
      }
    }
  }

  printf("ordem decrescente");

  for(int i=0;i<10;i++)
  {
    printf("\n%d",veta[i]);
  }

  return 0;
}
