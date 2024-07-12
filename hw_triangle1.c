#include<stdio.h>
int main()
{
    int a,b,c,total;
    scanf("%f%f%f",&a,&b,&c);
    if(a<=0||b<=0||c<=0)
    {
        printf("不能组成三角形\n");
        return 1;
    }
    else if(((a+b)<=c)||((a+c)<=b)||(b+c)<=a)
    {
        printf("不能组成三角形\n");
        return 2;
    }
    else
    {
        total=a+b+c;
        printf("%d/n",total);
        return 0;
    }

}