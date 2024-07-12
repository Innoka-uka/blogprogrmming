#include<stdio.h>
int searchLiner(int a[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
            return i;
    }
    return -1;
}
void main()
{
    int target;
    int arr[] = {1,5,7,8,13,19,20,23,29};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("please input the target:");
    scanf("%d",&target);
    int result = searchLiner(arr, size, target);
    if(result>0)
        printf("searchLiner result index:%d", result);
    else
        printf("not found!");
}