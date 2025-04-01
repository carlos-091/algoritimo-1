#include <stdio.h>
int main()
{
int anoatual, anonasc, idade;
printf("digiter seu ano de nascimento:");
scanf("%d",&anonasc);
printf("\n\n digiter o ano atual:");
scanf("%d",&anoatual);
idade=anoatual-anonasc;
if(idade>18){
printf("\n esse ano vc poder votar");
}
else {
printf("\n esse ano voce nao poder votar");
}
return 0;
}
