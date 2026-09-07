#include<stdio.h>
int main()
{
	int n,c;
	printf("enter no");
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++)
	{
	if(n%i==0)
	{
		c++;
	}
	
	}
	if(c==0)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
	
	return 0;
}
