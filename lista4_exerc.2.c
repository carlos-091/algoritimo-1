#include <stdio.h>
int main()
{
int n, i = 0, soma = 0;

printf("digite o valor de n:");
scanf("%d", &n);

while(i <= n)
    {
        printf("\n soma = %d + %d \n", soma, i);
        soma = soma + i;
        i++;
    }

printf("\n\n valor da soma = %d", soma);


return 0;
}
