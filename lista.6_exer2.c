#include <stdio.h>
int main()
{
int vet[]={7,12,3,32,17,18,5,40};
for(int i=0;i<8;i++)
{
if(vet[i]%2==0)
{
 printf("\nmultipo de dois:%d",vet[i]);
}
if(vet[i]%3==0)
{
 printf("\nmultipo de tres:%d",vet[i]);
}
}
return 0;
}
