#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if(a%b==0)
	{
		printf("%d is divisible by %d",a,b);
		
	}
	else
	{
		printf("%d is not divisible by %d",a,b);
	}
}
