#include <stdio.h>

int main()
{
    int n,t,sum,result;
    scanf("%d",&n);
    int grid[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&grid[i][j]);
        }
    }t=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==1)
            {t++;}
        }
    }
    //printf("%d ",t);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if (grid[i][j]*grid[i][j+1]==1)
            {sum++;}
        }
    }//printf("%d ",sum);
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if (grid[i+1][j]*grid[i][j]==1)
            {sum++;}
        }
    }
    result=4*t-2*sum;
    printf("%d",result);


}