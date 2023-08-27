#include<stdio.h>
void main()
{
	int n,rem,rev;
	scanf("%d",&n);
	rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d",rev);
}
