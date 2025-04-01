#include <stdio.h>
int main()
{
int n=3, z, bet=3;

while(bet <=998)
    {
        z= n+2;

        if((n % bet==0) || (z % bet ==0)){

            printf("%d e primo gemeo de %d\n", n, z);
        }

        bet = bet+2;
        n = n+2;

    }

return 0;
}
