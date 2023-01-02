#include<stdio.h>
#define size 10
void count(int a[],int n)
{
	int i,even,odd;
	even=0;
	odd=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			even++;
		else
			odd++;
	}
	printf("Even numbers=%d and odd numbers=%d\n",even,odd);
}
void main()
{
	int a[size],i,n,even,odd;
	even=0;
	odd=0;
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
	
