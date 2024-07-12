#include <stdio.h>
#include <float.h> // FLT_EPSILON
#include <stdlib.h> //malloc()
#include <math.h> // fabs()
#define myeps 0.2 //eps range
int main()
{
printf("please input len of numbers(int):");
int a,i,sum;
sum=0;
scanf("%d",&a);
int n[a];
for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
        sum+=n[i];
    }
printf("—mean:0.500000—allow eps:0.200000—\n");
double x[a];
double y[a];
for(int i=0;i<a;i++)
    {
        x[i]=((n[i]-n[0])*1.0)/(n[a-1]-n[0]);
        y[i]=((n[i]-sum/a)*1.0)/(n[a-1]-n[0]);
        if (y[i]>0)
        {
            printf("Outlier point:%f,epis:%f\n",x[i],y[i]);
        }
        else if (y[i]<0)
        {
            y[i]=-y[i];
            printf("Outlier point:%f,epis:%f\n",x[i],y[i]);
        }
    }

}