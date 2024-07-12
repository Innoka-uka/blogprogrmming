#include <stdio.h>
int main()
{
    int N,M,i,j;
    scanf("%d%d",&N,&M);
    int num[N];
    for ( i = 0; i < (N-M); i++ )
    {
        j=i+M;
        scanf("%d",&num[j]);
    }
    for( i = N-M; i < N ; i++ )
    {
        j=i+M-N;
        scanf("%d",&num[j]);
    }
    for( i = 0; i < N ; i++ )
    {
        printf("%d ",num[i]);
      
    }
    return 0;
}
