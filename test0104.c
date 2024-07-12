#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int nums[n],ans[n];
    int i,j,t;
    for (i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    t=0;
    for (i=0;i<n;i++)
    { 
        if (nums[i]!=0)
        { 
            ans[t]=nums[i];
            t++;
        }
    }
    for (i=t;i<n;i++)
    {
        ans[i]=0;
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",ans[i]);
    }
}
