#include <stdio.h>

int main()
  {
   int vet[15][5];

   for(int i=0;i<15;i++)
   {
     for(int j=0;j<5;j++)
     {
       vet[i][j]=rand()%76;
     }
   }

   printf("matriz A (valores randomicos):\n");

   for(int i=0;i<15;i++)
   {
     for(int j=0;j<5;j++)
     {
        printf("%d ",vet[i][j]);
     }
      printf("\n");
   }

    printf("\nelementos repetidos e sua suas quantidades:\n");

     for(int i=0;i<15;i++)
   {
     for(int j=0;j<5;j++)
     {
       int count=0;
       for(int k=0;k<15;k++)
       {
          for(int l=0;l<5;l++)
          {
             if(vet[i][j]==vet[k][l])
             {
                 count++;
                 if(count)
                 {
                     break;
                 }
             }
             if(count)
                 {
                     break;
                 }
          }
       }
       if((count>1)&&(vet[i][j]!=-1))
       {
           printf("o elemento %d aparece %dvezes em A.\n",vet[i][j],count);
           for(int k=0;k<15;k++)
           {
             for(int l=0;l<5;l++)
             {
                 if(vet[i][j]==vet[k][l])
                 {
                     vet[k][l]=-1;
                 }
             }
           }
       }
     }
   }

  return 0;
  }
