
#include <stdio.h>
int main()
{
int n,num;
printf("esclhar quais numeros que deseja verificar:");
for(int i=1;i <= 10;i++)
{
    printf("\ndigiter o %d numero:",i);
    scanf("%d",&num);
    if((num > 25) && (num < 85) )
    {
      printf("\n%d e maior que 25 e menor que 85\n",num);
    }
    if((num < 25) && (num < 85))
    {
      printf("\n%d e menor que 25 e 85\n",num);
    }
    if((num > 25) && (num > 85))
    {
      printf("\n%d e maior que 25 e 85\n",num);
    }
    if((num == 25) && (num < 85))
    {
      printf("\n%d e 25 e claro e menor 85\n",num);
    }
    if((num > 25) && (num == 85))
    {
     printf("%d e 85 e claro maior que 25",num);
    }
}
return 0;
}
