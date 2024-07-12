#include <stdio.h>
void bubble_sort(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int dis(int x,int y,int a,int b)
{
    int result;
    result=(x-a)*(x-a)+(y-b)*(y-b);
    return result;
}
int main()
{
    int n,m,k,t;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    int x[n],y[n],a[m],b[m];
    int dist[n][m];
    long sum[m];
    long min[k];
    int re[k];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&x[i],&y[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {   
            dist[i][j]=dis(x[i],y[i],a[j],b[j]);
            printf("%d ",dist[i][j]);
            
        }printf("\n");
    }
    printf("\n");
    for(int j=0;j<m;j++)
    { sum[j]=0;
        for(int i=0;i<n;i++)
        { printf("%d\t",sum[j]);
            sum[j]+=dist[i][j];
           
        } printf("%d\n",sum[j]);
    }
    
    for(int i=0;i<k;i++)
    { 
      for(int j=0;j<m;j++)
      { if(sum[j]>=0)
        {min[i]=sum[j];t=j;}}
      for(int j=0;j<m;j++)
      {if (sum[j]>=0&&sum[j]<min[i])
        {t=j;min[i]=sum[j];}} 
        re[i]=t+1;
      
       sum[t]=-1;
    }
    bubble_sort(re,k);
    for (int i = 0; i < k; i++)
        printf("%d ", re[i]);

}