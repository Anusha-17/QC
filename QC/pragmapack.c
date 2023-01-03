#include<stdio.h>
#pragma pack(1)
struct pack
{
	char a,b,c;
	int d;
}s;
void main()
{
	struct pack s;
	printf("%ld\n",sizeof(s));
}
/*
#pragma pack(4)
struct pach4
{
	char a,b,c;
	int d,e;
}s;
void main()
{
	struct pack s;
        printf("%ld\n",sizeof(s));
}
*/



