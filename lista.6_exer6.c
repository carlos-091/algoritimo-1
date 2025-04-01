#include <stdio.h>
int main()
{
  int A[8],maior;

  for(int i=0;i<8;i++)
  {
      printf("por favor escolhar um numero:");
      scanf("%d",&A[i]);
  }
  for(int i=0;i<8;i++)
  {
      if(A[i]>maior)
      {
          maior=A[i];
      }
  }

  printf("\nMaior valor:%d\n",maior);
  return 0;
}
