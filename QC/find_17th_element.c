#include<stdio.h>
void main()
{
	//char a[20]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'};
	unsigned char a[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int *p;
	p=&a;
	printf("%d",(char)*p+16);
}
