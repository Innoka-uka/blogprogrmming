//请使用chcp 65001为代码页

#include<stdio.h>
int main()
{
    int year,month,date,num,x;
    printf("please type year=\n");
    scanf("%d",&year);
    if (year <= 0)
     {
    printf("year must larger than 0\n");
    return 1;
     }

    printf("please type month=\n");
    scanf("%d",&month);
     if(month<=0||month>12)
    {
    printf("month must larger than 0 smaller than 13\n");
    return 1;
    }

    
    printf("please type date=\n");
    fflush(stdout);
    scanf("%d",&date);

    
    num=30*(month-1)+date;
    if(month>=2) num+=1;
    if((year%4==0&&year%100>0)||year%400==0)
    {
        if(month>=3) num-=1;
    }
    else
    {
        if(month>=3) num-=2;
    }
    if(month>=4) num+=1;
    if(month>=6) num+=1;
    if(month>=8) num+=1;
    if(month>=9) num+=1;
    if(month>=11) num+=1;
    printf("你输入的日期：%d年%d月%d日是该年的第%d天\n",year,month,date,num);
    printf("The date %d.%d.%d is the %dth day in the year.\n",year,month,date,num);
    return 0;  

}