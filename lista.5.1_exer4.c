#include <stdio.h>
int main()
{
int n,i=1,soma=0,j=1;
printf("escolha a quantidade  vezes que vamos soma:");
scanf("%d",&n);
do{
if(j%i !=0)
{
}
soma = soma + j;
j++;
i++;
}while(i <= n);
printf("\nessa e a soma da sua escolha:%d",soma);
return 0;
}
