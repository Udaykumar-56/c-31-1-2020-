#include<stdio.h>
int main()
{
	int r,c,a[10][10],i,j;
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			scanf("%d",&a[i][j]);
			}	
	}
	
	for(i=0;i<=r+1;i++)
	{
		for(j=0;j<=c+1;j++)
		{
			if(i==0 || j==0 ||i==r+1 ||j==c+1)
			{
				printf("* ");
			}
			else
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
