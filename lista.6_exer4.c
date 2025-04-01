#include <stdio.h>

int
main()
  {
   int  vet[10];
   int v=21;

   for(int i=0;i<10;i++)
   {
     vet[i] = v;

     printf("\n%d",vet[i]);

     v++;
   }


  return 0;
  }
