#include<stdio.h>
int main()
{
    int N,M,i,j,s,t,l,p,size;
    scanf("%d%d",&N,&M);
    int n[N-1][M-1];
    for ( i = 0; i < N; i++ )
    {
        for ( j = 0; j < M; j++ )
        {
            scanf("%d",&n[i][j]);
        }
    }
    
        for ( i = 0; i < N; i++ )
     {
        for ( j = 0; j < M; j++ )
        {
             for( l=p; l<N&&l<M; l++)
             {
                if (n[i+l][j+l]==1)
                {
                    s=i;
                    t=j;
                    p=l+1;
                }
                else
                {
                    break;
                }
                
             }
           
        }
     }
    if (l==0)
    {
        printf("0");
    }
    else
    {
        size=(l-1)*(l-1);
        printf("%d\n%d %d",size,(s+1),(t+1));
    }

}
