#include <stdio.h>
#include<math.h>

float ds(int xa, int ya, int xb, int yb){
    float result;
    result=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    return result;
}

int main() {
    int n,m;
    printf("please input the points:");
    scanf("%d",&n);
    int x[n],y[n];
    float sum[n];
    float t;
    printf("please input the pointX:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("please input the pointY:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }
    printf("finding...\n");
    for (int i=0;i<n;i++)
    {   sum[i]=0;
        for(int j=0;j<n;j++){
        sum[i]+=ds(x[i],y[i],x[j],y[j]);
        
        }
    }
    t=sum[0];
    m=0;
    for (int i=1;i<n;i++)
    {
        if (t> sum[i])
        {
            t= sum[i];
            m= i;
        }
    }
    printf("the center point is (%d,%d)",x[m],y[m]);
}




