#include<stdio.h>
int main()
{
int alf, gam, bet, zet;
float soma;
printf("\nescolhar um numero:");
scanf("%d",&alf);
printf("\nescolhar outro numero:");
scanf("%d",&gam);
printf("\nescolhar mais um numero:");
scanf("%d",&bet);
printf("\nescolhar o ultimo numero:");
scanf("%d",&zet);
soma=(alf+gam+bet+zet)/4;
printf("essa e a media das suas escolhas:%f", soma);
return 0;
}
