
#include <stdio.h>

int
main()
  {
   int vet[]={30,23,36,11,27,18};
   int cont_par=0,cont_impar=0;

   for(int i=0;i<6;i++)
   {
     if(vet[i]%2 == 0)
     {
       cont_par ++;
       printf("\ncoluna %d e um numero par:%d",i+1,vet[i]);
     }

     else
     {
       cont_impar ++;
       printf("\ncoluna %d e um numero impar:%d\n",i+1,vet[i]);
     }

      printf("\npossui %d numeros pares e %d numeros impares",cont_par,cont_impar);


  return 0;
   }
