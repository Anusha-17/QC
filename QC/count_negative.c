#include<stdio.h>
void count(int a[],int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
			count++;
	}
	printf("Negative numbers in an array:%d\n",count);
}
void main()
{
	int a[10],i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	void (*fp)(int[],int)=count;
	fp(a,n);
}
