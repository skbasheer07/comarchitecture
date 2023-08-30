#include<stdio.h>
int main()
{
	int n,bi,dec=0,base=1,r;
	printf("enter binary num:");
	scanf("%d",&n);
	bi=n;
	while(n>0)
	{
		r=n%10;
		dec=dec+r*base;
		n=n/10;base=base*2;
	}
	printf("binary number:%d\n",bi);
	printf("dec num:%d",dec);
	return 0;
}
