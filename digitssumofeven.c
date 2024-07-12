#include<stdio.h>
int main()
{
   int i;
   for(i=101;i<=130;i++)
   {
    if((i/100+i/10+i)%2==1)
    continue;
    printf("%d\t",i);
   }
   printf("\n");
   return 0;

}