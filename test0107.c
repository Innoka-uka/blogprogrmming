#include<stdio.h>
int main()
{
    int a;
    double x;
    scanf("%fE%d",&x,&a);
    if (a>0)
    {int ans=x*10;
        for(int i=1;i<a-1;i++)
        {
            ans=ans*10;
            
        }printf("%d",ans);
    }
    
}