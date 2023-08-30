#include<stdio.h>
int main()
{
	int count=1,a,b,choice,res,ins;
	printf("enter num1:");
	scanf("%d",&a);
	count=count+1;
	printf("enter num2:");
	scanf("%d",&b);
	count=count+1;
	printf("1.add\t 2.sub\t 3.mul\t 4.div\t");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:res=a+b;
		count=count+1;
		break;
		case 2:res=a-b;
		count=count+1;
		break;
		case 3:res=a*b;
		count=count+1;
		break;
		case 4:res=a/b;
		count=count+1;
		break;
		default:printf("wrong choice");
		break;
	}
	printf("cycle value:%d",count);
	printf("enter no.of instructions:");
	scanf("%d",&ins);
	int per=ins/count;
	printf("performance:%d",per);
	return 0;
	
}
