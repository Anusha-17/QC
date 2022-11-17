#include<stdio.h>
#include<string.h>
void reverse(char s[])
{
	char temp;
        int i,len;
        len=strlen(s)-1;
        for(i=0;i<strlen(s)/2;i++)
        {
                temp=s[i];
                s[i]=s[len];
                s[len--]=temp;
        }
        printf("Reverse string is : %s\n",s);
}

void main()
{
	char s[20];
	printf("Enter string:");
	scanf("%s",s);
	reverse(s);
	
}

