#include<stdio.h>
int main()
{
    int a,b,c,total;
    scanf("%d%d%d",&a,&b,&c);
    total=a+b+c;
    a<=0||b<=0||c<=0||(a+b)<=c||(a+c)<=b||(b+c)<=a?printf("不能组成三角形\n"):printf("%d\n",total);
    return 0;
}