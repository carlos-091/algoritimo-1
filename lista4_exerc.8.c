#include <stdio.h>
int main()
{
int n, fato=1, i=1;


printf("digite uma quantidade de numero:");
scanf("%d",&n);

if(n <= 0){

        printf("\nescolhar um numero maior do que zero");
        return 1;
    }



while(i <= n)
    {
        fato *= i;
        i++;
    }
    printf("\n\nfatorial de %d e %d", n, fato);



return 0;
}
