#include<stdio.h>
#include<string.h>
int main()
{
	char str[1001];
	scanf("%[^\n]",str);
	int l=strlen(str)-1;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]!=str[l])
		{
			printf("%c",str[i]);
			break;
		}
		else
		{
			l--;
		}
	}
}
