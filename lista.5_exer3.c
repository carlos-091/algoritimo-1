#include <stdio.h>
int main()
{
int a, b, c, d, e,menor,ant=-2000000,maior,dep=2000000;
printf("escolhar quais numeros que deseja verificar:");
printf("\nescolhar o primeiro numero:");
scanf("%d",&a);
printf("\nescolhar o segundo numero:");
scanf("%d",&b);
printf("\nescolhar o terceiro numero:");
scanf("%d",&c);
  printf("\nescolhar o quatro numero:");
  scanf("%d",&d);

  printf("\nescolhar o quinto numero:");
  scanf("%d",&e);


  menor=a;

  for(int i=1;i <= 5;i++)
  {
      if(a <=menor && a>ant)
       {
          menor=a;
       }
      if(b <= menor && b>ant)
       {
          menor=b;
       }
      if(c<=menor && c>ant)
       {
          menor=c;
       }
      if(d<=menor && d>ant)
       {
          menor=d;
       }
       if(e<=menor && e>ant)
       {
           menor=e;
       }

       printf("%d\n",menor);
       ant=menor;
       menor=2000000;
  }

               for(int i=1;i <= 5;i++)
  {
      if(a >=maior && a<dep)
       {
          maior=a;
       }
      if(b >= maior && b<dep)
       {
          maior=b;
       }
      if(c>=maior && c<dep)
       {
          maior=c;
       }
      if(d>=maior && d<dep)
       {
          maior=d;
       }
       if(e>=maior && e<dep)
       {
           maior=e;
       }

       printf("%d\n",maior);
       dep=maior;
       maior=-2000000;
  }


  return 0;
}
