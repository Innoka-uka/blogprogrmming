#include<stdio.h>
int main()
{
    int a,b,c,total;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)<=c)
    {
        printf("不能组成三角形\n");
      
    }
    else
    {
        if((a+c)<=b)
        {
             printf("不能组成三角形\n");
            
        }
        else
        {
            if((b+c)<=a)
            {
                printf("不能组成三角形\n");
            }
            else
            {
                total=a+b+c;
                printf("%d\n",total);
                
            }
        }
    }
    return 0;
}