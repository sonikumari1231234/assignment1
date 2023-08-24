#include<string.h>
#include<stdio.h>
int main()
{
	char s[20];
	int i;
	printf("Enter string");
	gets(s);
	int c=0;
	for(i=0;s[i] != '\0';i++)
	c++;
	
	printf("Length of string is %d",c);
	
}
