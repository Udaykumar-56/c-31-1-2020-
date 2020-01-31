#include<stdio.h>
int main()
{
	int n,a[100],x1=0,x2=1,x,j,i;
	scanf("%d",&n);
	a[0]=x1;
	a[1]=x2;
	for(i=2;i<n;i++)
	{
		a[i]=x1+x2;
		x1=x2;
		x2=a[i];
	}
	for(j=i-1;j>=0;j--)
	printf("%d",a[j]);
	return 0;
}
