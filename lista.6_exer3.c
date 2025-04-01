#include <stdio.h>
int
main()
{
int  proga[8],logi[10];
for(int i=0;i<8;i++)
{
printf("\npor favor escreva seu codigo se for aluno de logica:");
scanf("%d",&logi[i]);
}
for(int i=0;i<10;i++)
   {
     printf("\npor favor escreva seu codigo se for aluno de linguagem de proga.:");
     scanf("%d",&proga[i]);
   }
   for(int i=0;i<8;i++)
   {
     printf("esse e o codigo:%d do aluno %d",logi[i],i+1);
   }
   for(int i=0;i<10;i++)
   {
     printf("esse e o codigo:%d do aluno %d",proga[i],i+1);

   }

  return 0;
}
