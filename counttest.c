#include <stdio.h>

int main()
{
    long n,k,sum,s,l;
    int t;
    scanf("%ld",&n);
    scanf("%ld",&k);
    scanf("%d",&t);
    sum=0;
    for (int i=0;i<t;i++)
    {
        l=n*i+1;
        s=l*(l-1)/2+1;
        s=s%k;
        sum+=s;
    }
    printf("%ld",sum);
}