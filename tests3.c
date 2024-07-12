#include <stdio.h>

int min(int x, int y) {
    return x < y ? x : y;
}

int findMedian(int *a, int *b, int n, int pa, int pb) {
    if (n == 1) {
        return min(a[pa], b[pb]);
    }
    int ma = pa + (n + 1) / 2 - 1;
    int mb = pb + (n + 1) / 2 - 1;
    if (a[ma] < b[mb]) {
        return findMedian(a, b, (n + 1) / 2, pa + n / 2, pb);
    } else if (a[ma] > b[mb]) {
        return findMedian(a, b, (n + 1) / 2, pa, pb + n / 2);
    } else {
        return a[ma];
    }
}

int findMedianSortedArrays(int *A, int *B, int n) {
    return findMedian(A, B, n, 0, 0);
}

int main() {
    int m,n,s,t;
    scanf("%d%d",&m,&n);
    s=m+n;
    int a[m],b[n];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    if (s%2==0)
    {t=s/2;}
    else
    {t=(s-1)/2;}
    printf("%d", findMedianSortedArrays(a, b, t+1));
    return 0;
}