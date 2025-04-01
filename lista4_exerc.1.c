#include <stdio.h>
int main()
{
    int num = 1;

    while(num != 0)
    {
        printf("\n Digite um novo numero ou zero para sair:");
        scanf("%d",&num);

        printf("\n quadrado de %d = %d \n", num, num*num);

    }

    return 0;

}
