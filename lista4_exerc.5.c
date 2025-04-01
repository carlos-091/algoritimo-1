#include <stdio.h>
int main()
{
    int exp, bas, rels=1, i=0;


    printf("digite o valor do expoente:");
    scanf("%d",&exp);

    printf("\ndigite o valor da base:");
    scanf("%d",&bas);

while(i < exp)
    {
        rels *= bas;

        printf("\n %d ^ %d = %d \n", bas, exp, rels);

        i++;

    }

return 0;
}
