#include <stdio.h>
int main()
{
int binario,base=1,num,divi,resto;

printf("escolhar um numero pra vira binario:");
scanf("%d",&num);
divi=num;
while(divi != 0)
{

resto=divi%2;
divi=divi/2;
binario=resto*base+binario;
base=base*10;
printf("%d",binario);
}
return 0;
}
