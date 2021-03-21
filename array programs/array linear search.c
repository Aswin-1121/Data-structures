#include<stdio.h>
int main()
{
	int a[20],d,item,i,f;
	printf("enter the limit");
	scanf("%d",&d);
	printf("enter the array elements");
	for(i=0;i<d;i++)
	{
		scanf("%d",a[i]);
	}
	printf("enter the item to search");
	scanf("%d",&item);
	for(i=0;i<d;i++)
	if(a[i]==item)
	{
		printf("\n item is found at %d",i+1);
		f=0;
	}
	if(f!=0)
	printf("not found");
	
}
