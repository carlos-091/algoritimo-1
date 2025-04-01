#include <stdio.h>
int main()
{
int valor1, valor2;
printf("digiter um valor:");
scanf("%d",&valor1);
printf("\n\n digiter outro valor:");
scanf("%d",&valor2);
if(valor1>valor2){
printf("\n esse  e o maior valor:%d\n",valor1);
}
else
{
printf("\n esse e o maior valor:%d",valor2);
}

return 0;
}
