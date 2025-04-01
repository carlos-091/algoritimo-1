#include <stdio.h>
int main()
{
int n, i = 1;

printf("digite quais números nat impares que apareca:");
scanf("%d", &n);

while(i <= n)
    {
        printf("\n impar:%d \n",i);
        i = i+2;
    }

return 0;
}
