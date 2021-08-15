/*The first three terms in an arithmetic progression are passed as input. A positive integer value N (where N > 3) is also passed as the input. The program must print Nth term in the arithmetic.

Example 1:

Input:
5 10 15
6
Output:
30

Explanation:
The progression is 5 10 15 20 25 30 35 so on….
The 6th term is 30.*/
#include<stdio.h>
int main()
{
	int a,a1,a2;
	scanf("%d %d %d",&a,&a1,&a2);
	int n;
	scanf("%d",&n);
	int result;
	result=a+(n-1)*(a1-a);
	printf("%d",result);
}
