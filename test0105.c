#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int nums[n];
    int i,j,temp;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
        nums[i]=nums[i]*nums[i];
    }
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
             if (nums[j] > nums[j + 1]) 
                {
                    temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
    for (i=0;i<n;i++)
    {
        printf("%d ",nums[i]);
    }
}