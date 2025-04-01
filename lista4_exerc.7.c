#include <stdio.h>
int main()
{
int n, num, impar, z, x, par, i=1;


printf("digite uma quantidade de numero:");
scanf("%d",&n);

if(n <= 0){

        printf("\nescolhar um numero maior do que zero");
        return 1;
    }


    printf("\ndigiter o primeiro numero:");
    scanf("%d",&num);

    par = impar = num;

while(i < n)
    {
       //por favor nao e pra digitar o número que aparece e sim outro
        printf("\n digiter o numero %d:",i +1);
        scanf("%d",&num);



        i++;

        if (num % 2== 0){
           par += num;
           z++;
        }
        else{
            impar += num;
            x++;

        }
    }



printf("\n\nessa e a soma dos numeros par:%d",par);
printf("\n\nessa e a quantidade de numeros par:%d",z);

printf("\n\nessa e a soma dos numeros impar:%d",impar);
printf("\n\nessa e a quantidade de numeros impar:%d",x);


    return 0;
