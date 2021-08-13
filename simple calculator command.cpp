/*A string S is passed as input. S will contain two integer values separated by one of these alphabets -A,S,M,D where
-A or a is for addition
-S or s is for subtraction
-M or m is for multiplication
-D or d is for division

The program must perform the necessary operation and print the result as the output. (Ignore any floating point values just print the integer result)

Example 1:

Input:
5A11
Output:
16

Example 2:

Input:
120d6
Output:
20*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char c;
	int first,second;
	scanf("%d%c%d",&first,&c,&second);
	char operation;
	operation=tolower(c);
	int res=0;
	switch(operation)
	{
		case 'a':
			res=first+second;
			printf("%d",res);
			break;
		case 's':
			res=second-first;
			printf("%d",res);
			break;
		case 'm':
			res=first*second;
			printf("%d",res);
			break;
		case 'd':
			res=first/second;
			printf("%d",res);
			break;
	}
}
