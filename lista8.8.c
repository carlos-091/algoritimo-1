#include <stdio.h>

int
main()
  {
   int  vet[10]={1,2,3,2,4,5,6,3,7,1},rep[10]={0};

   printf("vetor A:");

   for(int i=0;i<10;i++)
   {
     printf("%d",vet[i]);
   }

   printf("\nnumeros repetidos e suas quantidades:\n");

   for(int i=0;i<10;i++)
   {
       int count=0;

       if(rep[i]==0)
       {
           for(int j=i+1;j<10;j++)
           {
               if(vet[i]==vet[j])
               {
                   rep[j]=1;
                   count++;
               }
           }
           if(count>0)
           {
               printf("%d se repete %d vez\n",vet[i],count+1);
           }
       }
   }
  return 0;
  }
