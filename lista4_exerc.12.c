#include <stdio.h>
int main()
{
int num=2;

while(num <= 20000) {

int bet=2, p=1;

while (bet*bet <=num){

if(num % bet == 0){

               p = 0;
               break;

            }
            bet++;
        }

        if(p){
            printf("%d\n",num);
        }
        num++;
    }

return 0;
}
