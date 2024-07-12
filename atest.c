#include <stdio.h>
#include <string.h>

int main() 
{
    char str[4];
    gets(str);
    int n;
     int exp = 0; // 指数
    // 计算指数
    for (int i =0; i < 3; i++) {
        exp = exp * 10 + (str[i] - '0');
    } 
    //printf("%s",&exp);
    puts(str);
    n=strlen(str);
    printf("%d",n);
}