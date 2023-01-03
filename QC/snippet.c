#include<stdio.h>
void main()
{
	int c;
	printf("%d\n"); //prints garbage value because it's undeclared datatype
	printf("Hello%nWorld\n",&c); // %n - reads the number of characters till %n
	printf("%d\n",c); // count - storing in variable c
}


#include<stdio.h>
#pragma startup fun
void fun()
{
	printf("In fun\n");
}
void main()
{
	printf("In main\n");
}

