#include <stdio.h>
int main()
{
int n, i = 0, temp, soma = 0, med;

printf("digite a quantidade de temperatura que voce deseja:");
scanf("%d", &n);

while(i < n)
    {
        printf("\n\ndigite a temperatura:");
        scanf("%d", &temp);

        soma = soma + temp;

        i++;
    }

med = soma/n;

printf("\n\n  media = %d \n\n", med);


return 0;
}
