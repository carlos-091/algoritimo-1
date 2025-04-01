#include <stdio.h>
int main()
{
int P=0, i=0, U=0, R=0;

printf("fale a corente:");
scanf("%d",&i);

printf("\nagora fale a tensão:");
scanf("%d",&U);

printf("\nagora fale a resistencia:");
scanf("%d",&R);

if (( i <= 0) && (U > 0) && (R > 0)){
        P = (U*U)/R;
        printf("\nessa e a potencia:%d", P);
    }
else if ((i > 0) && (U <= 0) && (R > 0)) {
        P = R*(i*i);
        printf("\nessa e a pontencia:%d", P);
    }
if ((i > 0) && (U > 0) && (R <= 0)) {
         P = i*U;
        printf("\nessa e a pontencia:%d", P);
    }
else{
         printf("\npor favor fale tudo que foi pedido.");
     }

    return 0;

}
