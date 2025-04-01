#include <stdio.h>
int main()
{
int idade;
char let;
printf("diga a sua idade:");
scanf("%d",&idade);
printf("diga seu genero:");
scanf(" %c", &let);
if ((idade >= 18) && (let == 'm')){
printf("\nvoce poder se alistar no exercito");
}
else{
printf("\nvoce nao precisa se alistar no exercito");
}
return 0;
}
