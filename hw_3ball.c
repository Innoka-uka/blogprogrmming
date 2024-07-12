#include <stdio.h>
int b(int n);
int r(int n); 
int g(int n);
int n;
int r(int n)
{
    if(n==1)
    {return 1;}
    else
    {return b(n-1)+g(n-1);}
}
int b(int n)
{
    if(n==1)
    {return 1;}
    else
    {return r(n-1)+g(n-1)+b(n-1);}
}
int g(int n)
{
    if(n==1)
    {return 1;}
    else
    {return b(n-1);}
}
int main() 
{ 
    int n,s;
    scanf("%d",&n);
    s=r(n)+b(n)+g(n);
    printf("%d",s);
}