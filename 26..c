#include<stdio.h>
int main()
{
	float cr;
	int p,p1,i;
	float cpu[5];
	float cpi,ct,max;
	int n=1000;
	for(i=0;i<=4;i++)
	{
		cpu[5]=0;
	}
	printf("enter no.of processor:\n");
	scanf("%d",&p);
	p1=p;
	for(i=0;i<p;i++)
	{
		printf("enter cycles per instruction:");
		scanf("%f",&cpi);
		printf("enter clockrate:");
		scanf("%f",&cr);
		ct=1000*cpi/cr;
		printf("cpu time is %f",ct);
		cpu[i]=ct;
	}
	max=cpu[0];
	for(i=0;i<p1;i++)
	{
		if(cpu[i]<=max)
		max=cpu[i];
	}
	printf("processor has lowest execution is %f",max);
	return 0;
}

