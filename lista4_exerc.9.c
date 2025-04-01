#include <stdio.h>
int main()
{
int n, z, y, num=0, bet=1;

 printf("eschar a quantidade de numero:");
scanf("%d",&n);

printf("escolha um numero inteiro:");
scanf("%d",&z);

printf("escolha outro numero int:");
scanf("%d",&y);

    if((y == 0) || (z == 0)){

        printf("\nescolhar valores maior que zero");
        return 1;
    }

    printf("os %d são os primeiros multiplos de %d e %d:",n,z,y);

while(bet < n)
    {
       if((num %z ==0) || (num %y ==0)){

           printf("\n%d\n",num);
           bet++;
       }

        num++;
    }

return 0;
}
