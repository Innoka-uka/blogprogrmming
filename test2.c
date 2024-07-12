#include <stdio.h>

int main() 
{
    int a;
    scanf("%d\n",&a);
    int n[a][a];
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<a;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    
    int i=0;
    int j=0;
    i=0;
	j=0;
	printf("%d ",n[i][j]);
	do{
		printf("%d ",n[i][++j]);
		for(i=i+1,j=j-1;j>=0;j--,i++)
		printf("%d ",n[i][j]);
		i--;
		j++;
		if(i==(a-1))
		break;
		printf("%d ",n[++i][j]);
		for(i=i-1,j=j+1 ;i>=0;i--,j++)
		printf("%d ",n[i][j]);
		i++;
		j--;
	}while(i+j<=a);
	do
	{
		printf("%d ",n[i][++j]);
		for(i=i-1,j=j+1;j<a;j++,i--)
		printf("%d ",n[i][j]);
		i++;
		j--;
		if(j==(a-1)&&i==(a-1))
		break;
		printf("%d ",n[++i][j]);
		for(i=i+1,j=j-1;i<a;i++,j--)
		printf("%d ",n[i][j]);
		i--;
		j++;
	}while(i<a||j<a);


       
}
