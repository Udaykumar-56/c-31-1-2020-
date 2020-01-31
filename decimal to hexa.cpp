#include<stdio.h>
int main()
{
	int n,i=0,a[100],j;
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%16;
		i++;
		n=n/16;
	}
	for(j=i-1;j>=0;j--)
	if(a[j]>=10 &&a[j]<=15)
		printf("%c",a[j]+55);
		else
       printf("%d",a[j]);
	return 0;
}
