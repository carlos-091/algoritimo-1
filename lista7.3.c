#include <stdio.h>
#include <stdlib.h>

int main()
  {
   int m[12][13];

    for(int i=0;i<12;i++)
   {
     for(int j=0;j<13;j++)
     {
       m[i][j]=(rand()%101)-50;
     }
   }

   printf("matriz original:\n");

   for(int i=0;i<12;i++)
   {
     for(int j=0;j<13;j++)
     {
        printf("%d\t",m[i][j]);
     }
      printf("\n");
   }

   for(int i=0;i<12;i++)
   {
     int maior=abs(m[i][0]);

     for(int j=1;j<13;j++)
     {
       if(abs(m[i][j])>maior)
       {
           maior=abs(m[i][j]);
       }
     }
     for(int j=0;j<13;j++)
     {
         m[i][j]=(float)m[i][j]/maior;
     }
   }

   printf("\nmatriz modificada:\n");
   for(int i=0;i<12;i++)
   {
       for(int j=0;j<13;j++)
       {
           printf("%.2f\t",m[i][j]);
       }
        printf("\n");
   }
  return 0;
  }
