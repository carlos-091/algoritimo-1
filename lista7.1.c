
#include <stdio.h>

int
main()
  {
   int  vet[5][5] ={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
   int A=0,B=0,C=0,D=0;

   for(int i=0;i<5;i++)
   {
     for(int j=0;j<5;j++)
     {
       if(i ==3)
       {
        A=A+vet[i][j];
       }
       if(j==2)
       {
         B+=vet[i][j];
       }
       if(i==j)
       {
         C+=vet[i][j];
       }

       D+=vet[i][j];
     }
   }

   printf("\nessa a soma da linha 4:%d",A);

   printf("\nessa e a soma da coluna 2:%d",B);

   printf("\nessa e a soma de todas as diagonal principal:%d",C);

   printf("\nessa e a soma de todos os elementos:%d",D);


  return 0;
  }
