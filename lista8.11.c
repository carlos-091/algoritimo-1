#include<stdio.h>

int main()
{
  int A[10]={1,2,3,4,5,6,7,8,9,10},B[10]={11,12,13,14,15,16,17,18,19,20},C[20],n=10;

  for(int i=0;i<10;i++)
  {
    C[i]=A[i];
  }
  for(int i=0;i<10;i++,n++)
  {
    C[n]=B[i];
  }
  for(int i=0;i<20;i++)
  {
    printf("\n%d",C[i]);
  }
  return 0;
}
