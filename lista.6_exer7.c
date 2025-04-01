#include <stdio.h>
int main()
{
  float a[6],b[6],bet=0;
  for(int i=0;i<6;i++)
  {
      printf("\nme diga um valor para  o vetor A e depois do  B com um espaco:");
      scanf("%f%f",&a[i],&b[i]);
  }
  for(int i=0;i<6;i++)
  {
      printf("\nposicao 1 de A com valor %.2f+B com valor %.2f=%.2f");
      bet=a[i]+b[i];
      a[i]=bet;
  }
  for(int i=0;i<6;i++)
  {
      printf("valor atual de A=%.2f\n",a[i]);
  }

  return 0;
}

