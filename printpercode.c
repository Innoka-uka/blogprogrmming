//输入一个任意正整数，把该数字逐位输出
#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
    do
    {
       
    a=n%10;
    n=n/10;
    i= i*10+a;
    
    }
    while(n>=1);
    
    do
    {
    a=i%10;
    i=i/10;
    printf("%d\t",a) ;
    }
    while(i>=1);
    


  
    return 0;

}