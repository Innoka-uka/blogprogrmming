#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,max;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=a>=b?a:b;
    f=c>=d?c:d;
    max=e>=f?e:f;
    printf("%d\n",max);
    return 0;
}
