#include <stdio.h>

int main()
  {
   int n,b,m=1,z;

   printf("Diite um valor pra x");
   scanf("%d",&n);
   printf("Diite um valor pra y");
   scanf("%d",&b);

   if(n>b)
   {
     z=n;
   }
   else
   {
    z=b;
   }

   for(int i= z; i > 0;i--)
   {
    if((n%i==0)&&(b%i==0))
    {
     m=i*m;

     n=n/i;

     b=b/i;

    }
   }

   printf("esse e o mdc:%d",m);

  return 0;
  }
