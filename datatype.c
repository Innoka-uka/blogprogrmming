#include<stdio.h>
#include <stdbool.h>
/********演示程1：讨论数据类型和内存
 * 实验目的：体验变量和常量
 * 知识点：变量的内存实质
 * 欢迎大家破坏性测试：）
 * email:ppu@cc.ecnu.edu.cn
 * update:2022-10-8
 *****/
void main()
{
    printf("###########################\n"); /* use the printf() function    */
    printf("###start\n");
    printf("###########################\n");

    int num; /* define a variable called num */
    printf("My favorite number is %d because it is first.\n", num);
    num = 1; /* assign a value to num       */
    num=-9.4; //error
    printf("I am a simple computer.\n"); /* use the printf() function    */
    printf("My favorite number is %d because it is first.\n", num);
    int a=10;
    printf("My favorite number is %d \n", a);
    int i,j;
    printf("before initial,i--j, %d,%d\n",i,j);
    //破坏性实验：overfloat -2,147,483,648 to 2,147,483,647.
    printf("\n int size in bytes is: %d \n", sizeof(int));
    //int imax=2147483647;
    int imax = 6;
    imax=imax+2;
    printf("Try to test the maxvalue of int is %d \n", imax);

    long long lmax = 2147483647;
    lmax = lmax + 2;
    printf("Try to test the maxvalue of long long int is %lld \n", lmax);
    
    //体验略微特殊的char,默认char有符号，从-128~127
    char chr='a';
    printf("char chr is %d the same value as %c\n", chr,chr);
    chr = chr + 1;
    printf("after op + char chr is %d the same value as %c\n", chr, chr);
    //体验overflow char
    printf("\n float size in bytes is: %d \n", sizeof(char));
    chr = 128; //chr=256 chr=127
    printf("char chr is %d the same value as %c\n", chr, chr);
    //体验有符号，无符号
    chr = -1; // chr=256
    printf("char chr is %d the same value as %c\n", chr, chr);
    unsigned char unchr1 = -1, unchr2=254;
    printf("unsigned char unchr1 is %d unchr2 is %d\n", unchr1, unchr2);
    //体验数据类型一致性
    int inum1=1,inum2=3;
    printf("\n num1/num2 is %f", inum1 / inum2);
    float fnum1 = 1, fnum2 = 3;
    printf("\n num1/num2 is %f\n", fnum1 / fnum2);
    //在C99中，引入了bool量，bool量通过char型定义存放在头文件stdbool中
    printf("sizeof(bool):%d\n", sizeof(bool));
    //编译器不同，非0值不同，GCC编译时默认非0为1。
    printf("in C99 true value:%d\n", true);
    printf("in C99 false value:%d\n", false);

}