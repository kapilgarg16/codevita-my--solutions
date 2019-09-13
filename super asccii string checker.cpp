//code vita (2014)

/*			Problem : Super ASCII String Checker

In the Byteland country a string "S" is said to super ascii string if and only if count of each character in the string is equal to its ascii value.

In the Byteland country ascii code of 'a' is 1, 'b' is 2 ...'z' is 26.

Your task is to find out whether the given string is a super ascii string or not.

Input Format:

First line contains number of test cases T, followed by T lines, each containing a string "S".

Output Format:

For each test case print "Yes" if the String "S" is super ascii, else print "No"
Constraints:

1<=T<=100
1<=|S|<=400, S will contains only lower case alphabets ('a'-'z').

Sample Input and Output

SNo.	Input	   Output
1	
	2
	bba            Yes
	scca	       No
		
Explanation:

In case 1, viz. String "bba" -
The count of character 'b' is 2. Ascii value of 'b' is also 2.
The count of character 'a' is 1. Ascii value of 'a' is also 1.
Hence string "bba" is super ascii.*/





//2.my solution
#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	char s[402];
	int t,i,j,l;
	
	cin>>t;
	while(t--)
	{
	int f=0;
	cin>>s;
	l=strlen(s);
	for(i=0;i<l;i++)
	{
	int c=0;
	if(s[i]=='0')
	continue;
	
	for(j=0;j<l;j++)
	{
	if(s[j]=='0')
	continue;
	if(i!=j)
	{
	if(s[i]==s[j])
	{s[j]='0';
	c++;
	}}
	}
//	cout<<s[i]<<"->"<<c+1<<endl;   //determine about how many different type of alphabet and their count^^
	if((c+1)!=(s[i]-96))
	{f=1;
	break;
	}
	s[i]='0';
	}
	if(f)
	cout<<"No\n";
	else
	cout<<"Yes\n";
	}
	return 0;
}
