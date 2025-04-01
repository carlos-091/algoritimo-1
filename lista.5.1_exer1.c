#include <stdio.h>
int main()
{
int n,i=1,soma=0,j=0;

printf("escolha a quantidade  vezes que vamos soma:");
scanf("%d",&n);

do{
printf("\ndigiter um numero:");
scanf("%d",&j);
soma = soma + j;
i++;
}while(i <= n);
printf("\nessa e a soma da sua escolha:%d",soma);

return 0;
}
