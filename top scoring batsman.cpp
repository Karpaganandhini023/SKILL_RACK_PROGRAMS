/*Top Scoring Batsman Name
ID:2571
The runs scored by N batsmen of a cricket team is passed as the input to the program. The program must print the name of the batsman who scored the highest runs. (You can assume that no two batsmen will be the top scorers).
Input Format:
The first line denotes the value of N.
Next N lines will contain the name of the batsman and the runs score (both separated by a comma)
Output Format:
The first line contains the name of the batsman with the top score.
Boundary Conditions:
2 <= N <= 11
The length of the names will be from 3 to 100.
The value of the runs will be from 0 to 500.
Example Input/Output 1:
Input:
5
BatsmanA,45
BatsmanB,52
BatsmanC,12
BatsmanD,9
BatsmanE,78
Output:
BatsmanE
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char batsman[1001],max_run_batsman[1001];
	int run;
	int max=0;
	while(scanf("%[^,],%d",batsman,&run)>0)
	{
		if(run>max)
		{
			max=run;
			strcpy(max_run_batsman,batsman);
		}
	}
	printf("%s",max_run_batsman);
}
