#include <stdio.h>
int main()
{
int p, z=1,bet=2;

printf("escolha um numero inteiro:");
scanf("%d",&p);

    if(p <= 0)
    {

        printf("\nescolhar um valor maior que 1.");
        return 1;
    }


    while(bet<= p/2)
    {
        if(p % bet==0){

            z =0;
            break;
     }

        bet++;

    }

    if(z){

        printf("\n%d e um numero primo\n",p);

    }
    else{

        printf("\n%d não e um numero primo\n",p);

    }

return 0;
}
