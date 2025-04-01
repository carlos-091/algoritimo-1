#include <stdio.h>
int main()
{
int valor1, valor2;
printf("digiter um valor:");
scanf("%d",&valor1);
printf("\n\n digiter outro valor:");
scanf("%d",&valor2);
if(valor1>valor2){
printf("\n%d e maior que %d",valor1,valor2);
}
else {
printf("\n%d e maior que %d",valor2,valor1);
}
return 0;
}
