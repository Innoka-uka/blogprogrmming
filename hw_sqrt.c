#include<stdio.h>
int main()
{
    int n,a;
    double b,c,d,e,f,result;
    printf("please input the number:\n");
    scanf("%d",&n);
    a=0;
    while(a*a<=n)
    {
        a++;
    }
    b=(double)a-1;
    while(b*b<=n)
    {
        b=b+0.1;
    }
    c=b-0.1;
    while(c*c<=n)
    {
        c=c+0.01;
    }
    d=c-0.01;
    while(d*d<=n)
    {
        d=d+0.001;
    }
    e=d-0.001;
     while(e*e<=n)
    {
        e=e+0.0001;
    }
    f=e-0.0001;
    while(f*f<=n)
    {
        f=f+0.00001;
    }
    result=f;
    printf("%f",result);
    return 0;


}