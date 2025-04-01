#include <stdio.h>

int
main()
  {
   int  vet[20],bet[20];
   int v=5;

   for(int i=0;i<20;i++)
   {
     vet[i] = v;

     printf("\n%d",vet[i]);

     v++;
   }
   for(int i=0;i<20;i++)
   {
     bet[i] = vet[i]*2;

     printf("\n%d",bet[i]);

   }


  return 0;
  }
