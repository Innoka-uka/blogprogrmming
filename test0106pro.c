#include<stdio.h>
int main()
{
    int m,n,r,c,i,j,s,t;
    scanf("%d%d%d%d",&m,&n,&r,&c);
    s=m*n;
    int lst[s];
    for (i=0;i<s;i++){scanf("%d",&lst[i]);}
    if (s==r*c)
    {
        
        for (i=0;i<s;i++)
        {
            printf("%d",lst[i]);
            if(i<s-1&&(i+1)%c!=0){printf(" ");}
            if((i+1)%c==0&&t<r-1){
                printf("\n");
                t++;
                }
            
        }
    }
    else
    {
        
        for (i=0;i<s;i++)
        {
            printf("%d",lst[i]);
            if(i<s-1){printf(" ");if((i+1)%n==0&&i<s-n){printf("\n");}}
            
        }
    }
}