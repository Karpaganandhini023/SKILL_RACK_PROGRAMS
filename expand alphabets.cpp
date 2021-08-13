/*A string S is passed as input. S will contain multiple integer values followed by an alphabet. The program must expand the alphabets based on the previous integer value.

Input Format: The first line contains S. Output Format: The first line contains the expanded string value. 

Boundary Conditions: Length of S is from 2 to 100. 

Example Input/Output 1: 
Input: 
4a5h

Output: 
aaaahhhhh 

Explanation: As it is 4a and 5h, four a's are printed followed by 5 h's 

Example Input/Output 2: 
Input: 
1k2b4k 

Output: 
kbbkkkk*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[1001];
	int i,n=0,charinte,len,j;
	scanf("%s",str);
	len=strlen(str);
    for(i=0;i<len;i++)
    {
        if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
        {
            do
            {
                printf("%c",str[i]);
                n--;
            }while(n>0);
            n=0;
        }
        else
        {
            charinte=(int)str[i]-48;
            n=(n*10)+charinte;
        }
    }
}
