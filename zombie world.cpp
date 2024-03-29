//code vita 2014(1st round))
		
	/*	Problem : Zombie World

Zoya has developed a new game called Zombie World. The objective of the game is to kill all zombies in given amount of time. More formally,
-         N represents the total number of zombies in the current level
-         T represents the maximum time allowed for the current level
-         P represents the initial energy level a player starts with
-         Ei defines the energy of the i-th zombie
-         D defines the minimum energy the player needs, to advance to the next level
When a player energy is greater than or equal to the i-th zombie's energy, the player wins. Upon winning, the player will be awarded with an additional energy equal to the difference between current zombie energy and the player energy.
One unit of time will be taken to complete the fight with a single zombie.
Rules of the game:-
-         At any given time, a player can fight with only one zombie
-         Player is allowed to choose any one zombie to fight with.
Your task is to determine whether the player will advance to the next level or not, if he plays optimally.


Input Format:


The first line contains the number of test cases (K)

Each test case consists of three parts:

1. The total number of zombies (N) and the maximum time allowed (T)
2. Array of size N, which represents the energy of zombies (E)
3. The initial energy level a player (P) and the minimum energy required to advance (D)

Output Format:


Print "Yes" if a player can advance to the next level else print "No".

Constraints:

1<=K<=10
1<=N<=50
1<=Ei<=500
1<=T<=100
1<=D<=2000
1<=P<=500

Sample Input and Output

SNo.	Input	Output
1	
	1
	2 3  	Yes
	4 5
	5 7	
----------------------------------------------------------------------------------------------------------------------------*/
//solution
#include<iostream>                           
using namespace std;

int main()
{
	int k,n,T,e[50],p,d,t;    	//t - test cases
	cin>>k;				//n - number of zombies
	while(k--)			//T - maximum time
	{                           	//e[i] -energy of ith zombies:
		cin>>n>>T;		//p - intial energy level of player
		int i,j;		//d - minimum energy required in advance	
		for(i=0;i<n;i++)
		cin>>e[i];
		
		cin>>p>>d;
		
		for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
		{
			if(e[i]<e[j])
			{
			    t=e[i];
			    e[i]=e[j];
			    e[j]=t;
			}
		}
		}
		int f=0;
		for(i=0;i<n;i++)
		{
		if(p>=e[i])
		{
		f=1;
		p=2*p-e[i];
		}
		if(i<=T)
		{
		if(p>=d)
		{cout<<"Yes\n";
		 break;
		}
		}
		else
		{cout<<"No\n";
		break;}
		}
		if(f==1)
		{
		if(p<d)
		cout<<"No\n";
		}
		else 
		cout<<"No";
	}
	return 0;}
