#include <stdio.h>

int main() 
{
    int a, b,c, d;
    int n[100];
    scanf("%d%d%d",&a,&b,&d);
    c=a+b;
    int count=0;
    do{
		n[count++]=c%d;
		c=c/d;
	}while(c!=0);
	for(int i=count-1;i>=0;i--)
    {
		printf("%d",n[i]);
    }


}