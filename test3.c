#include <stdio.h>

int main() 
{
    int a,b,c;
    scanf("%d",&a);
    if (a<10000)
    {
        c=a%100;
        if(a<2300)
        {
            b=2000+(a-c)/100;
        }
        else
        {
            b=1900+(a-c)/100;
        }
    }
    else
    {
        c=a%100;
        b=(a-c)/100;
    }
    printf("%d-%02d",b,c);
}