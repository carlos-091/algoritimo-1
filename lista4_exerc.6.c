#include <stdio.h>
int main()
{
int n, num, maior, menor, i=1;


printf("digite uma quantidade de numero:");
scanf("%d",&n);

if(n <= 0){

        printf("\nescolhar um numero maior do que zero");
        return 1;
    }


    printf("\ndigiter o primeiro numero:");
    scanf("%d",&num);

    maior = menor = num;

    while(i <=n)
    {
       //por favor nao e pra digitar o número que aparece e sim outro
        printf("\n digiter o numero %d:",i +1);
        scanf("%d",&num);



        i++;

        if(num < maior){
           maior = num ;
        }
        if (num > menor){
            menor = num;
        }
    }

printf("\n%d e o menor numero", menor);

printf("\n%d e o maior numero", maior);


return 0;
}
