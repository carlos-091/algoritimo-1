#include <stdio.h>
int main()
{

int n=0;
double soma=0.0;

printf("escolha uma quantidade vezes que ira somar:");
scanf("%d",&n);

for(int i=1;i <= n;i++)
{
    soma += 1.0/i;
}

printf("essa e a soma:%f",soma);
return 0;
}
