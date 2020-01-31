#include<stdio.h>
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
     printf("%d",a[0]);
	for(i=1;i<n-1;i++)
	{
		printf("%d",a[i-1]*a[i+1]);
	}
	printf("%d",a[n-1]);
	return 0;
}
