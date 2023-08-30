#include<stdio.h>
int main()
{
	long dec,r,q,oct=0;
	int octnum[100],i=1,j;
	printf("enter dec:");
	scanf("%ld",&dec);
	q=dec;
	while(q!=0)
	{
		octnum[i++]=q%8;
		q=q/8;
	}
	for(j=i-1;j>0;j--)
	{
		oct=oct*10+octnum[j];
	}
	
	printf("oct value=%d",oct);
	
	
	return 0;
}
