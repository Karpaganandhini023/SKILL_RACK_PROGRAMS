#include<stdio.h>
int main()
{
	char ch;
	char str[256];
	//int c=0;
	int i,j;
	fgets(str,256,stdin);
	for(i=0;str[i]!='\0';++i)
	{
		while(!((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')|| (str[i]=='\0')))
		{
			for(j=i;str[j]!='\0';++j)
			{
				str[j]=str[j+1];
			}
			str[j]='\0';
		}
	}
	printf("%s",str);
/*	while(scanf("%c",&ch)!='\n')
	{
		if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
		{
			//c++;
			string[c++]=ch;
		}
			printf("%s",string);
	}*/

	return 0;
}
