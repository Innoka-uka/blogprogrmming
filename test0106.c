#include<stdio.h>
int main()
{
    int m,n,r,c,i,j,s,t;
    scanf("%d%d%d%d",&m,&n,&r,&c);
    int sq[m][n],an[r][c];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&sq[i][j]);
        }
    if (m*n==r*c)
    {
        s=m*n;
        int lst[s];
        for(i=0;i<m;i++)
           for(j=0;j<n;j++)
           {
             lst[t]=sq[i][j];
             t++;
           }
        t=0;
        for(i=0;i<r;i++)
        {
           for(j=0;j<c;j++)
            {
              printf("%d ",lst[t]);
              t++;
            }
            printf("\n");
        }
           

    }
    else
    {
       for(i=0;i<m;i++)
       {
        for(j=0;j<n;j++)
        {
            printf("%d ",sq[i][j]);
        } 
        printf("\n");
       }
    }
}