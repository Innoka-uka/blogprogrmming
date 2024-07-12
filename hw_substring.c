#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,la,lb;
	int num = 0;
	char a[100],b[200],c;
    printf("input the string:");
	while ((c = getchar()) != '\n')
	{
		a[num] = c;
        num++;
	}
	a[num] = '\0';
	num = 0;
    printf("Input the substring to be search:");
	while ((c = getchar()) != '\n')
	{
		b[num++] = c;
		
	}
	b[num] = '\0';
	la = strlen(a);
	lb = strlen(b);
	for (i = 0; i<=la-lb; i++)
	{
		if (a[i] == b[0])
		{
			for (j = 0; j < lb; j++)
			{
				if (a[i + j] != b[j])
					printf("The substring is not exists in the string.");
				
			}
			if (j == lb)
			{
				printf("The substring exists in the string.");
				break;
			}
		}
	}
	return 0;
}
