#include<stdio.h>
#include<stdlib.h>
int *getFibonacci(int maxSize) ;
void printArr(int a[], int n) ;
int searchFib(int a[], int *fibonacci,int n, int target)
{
    int left = 0;               // 区间左端
    int right =n - 1; // 区间右端 
    // 2. 获取斐波那契数列中等于或者第一个大于数组长度的数
    int i = 0;
    while (fibonacci[i] < n)
    {
        i++;
    }
    while (left <= right)
    {
        int mid = left + fibonacci[i - 1] - 1; // 计算查找点
        printf("mid:%d\n",mid);
        if (a[mid] < target)
        {                   // 如果查找点小于目标值，说明在右区间
            left = mid + 1; // 右区间起点
            i -= 2;         // 右区间长度是 f[i-2]，所以要把 i 换成 i-2
        }
        else if (a[mid] > target)
        {                    // 如果查找点大于目标值，说明在左区间
            right = mid - 1; // 左区间终点
            i -= 1;          // 左区间长度是 f[i-1]，根据所以要把 i 换成 i-1
        }
        else
        { // 如果相等，说明找到了
            /* 找到存在两种可能：一是找到的是原查找表中的元素，二是找到的是填充值。因此需要判别*/
            if (mid <= right)
            { // 如果是原查找表中的元素，直接返回索引
                return mid;
            }
            else
            { // 如果找到的是填充值，则返回原查找表最后一个索引
                return right;
            }
        }
    }
    return -1;
}
/**
 * 创建斐波那契数列
 * @param maxSize   斐波那契数列长度
 * @return int[]    斐波那契数列
 */
int* getFibonacci(int maxSize)
{
    int *fib_arr;
    fib_arr = (int *)malloc(sizeof(int) * maxSize);

    fib_arr[0] = 0;
    fib_arr[1] = 1;
    for (int i = 2; i < maxSize; i++)
    {
        fib_arr[i] = fib_arr[i - 1] + fib_arr[i - 2];
    }
    return fib_arr;
}
// Print an array
void printArr(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}
void main()
{
    int target;
    int arr[] = {1,5,7,8,13,19,20,23,29};
    int size=sizeof(arr)/sizeof(arr[0]);
    printArr(arr, size);
    printf("please input the target:");
    scanf("%d",&target);
    // 1. 创建斐波那契数列
    int *fibonacci = getFibonacci(20);
    printArr(fibonacci,20);
    int result = searchFib(arr, fibonacci,size, target);
    if(result>0)
        printf("searchLiner result index:%d", result);
    else
        printf("not found!");
}