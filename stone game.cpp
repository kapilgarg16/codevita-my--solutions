       //code vita 2014


/*				Problem : Stone Game - One Four


Alice and Bob are playing a game called "Stone Game". Stone game is a two-player game. Let N be the total number of stones. In each turn, a player can remove either one stone or four stones. The player who picks the last stone, wins. They follow the "Ladies First" norm. Hence Alice is always the one to make the first move. Your task is to find out whether Alice can win, if both play the game optimally.

Input Format:

First line starts with T, which is the number of test cases. Each test case will contain N number of stones.

Output Format:

Print "Yes" in the case Alice wins, else print "No".

Constraints:

1<=T<=1000
1<=N<=10000

Sample Input and Output

SNo.	Input	Output
1	
	3
	1        Yes
	6        Yes
	7      	 No

*/

//my solution 3(c++)
#include<iostream>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		if(n<4)
		{
			if(n==1||n==3)
			cout<<"YES\n";
			else
			cout<<"NO\n";
		}
		else
		{
			int c=n/4;
			if(n%4==0)
			{
			if(c%2==1)
			cout<<"YES\n";
			else
			cout<<"NO\n";
			}
			else
			{          int k=n-4*c;
				if(c%2==0)
				{
				if(k==1||k==3)
				cout<<"YES\n";
				else
				cout<<"NO\n";
				}
				else
				{
				if(k==1||k==3)
				cout<<"NO\n";
				else
				cout<<"YES\n";
				}
			}}}}

