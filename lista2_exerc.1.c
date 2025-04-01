#include<stdio.h>
int main()
{

float alf;
char let;
int num;

printf("\nescolhar um  número decimal:");
scanf("%f",&alf);

printf("\n\nescolhar uma letra:");
scanf("%s",&let);

printf("\n\nescolhar um numero inteiro:");
scanf("%d",&num);

printf("\n\nessa e a sua escolha:%f", alf);
printf("\n\nessa e a sua escolha:%c", let);
printf("\n\nessa e a sua escolha:%d", num);
return 0;
}
