#include<stdio.h>
long long ways(int n)
{ 
    if(n>3){
    return ways(n-1)+ways(n-2)+ways(n-3);}
    else if(n==3){return 4;}
    else if(n==2){return 2;}
    else {return 1;}
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld",ways(n));
}