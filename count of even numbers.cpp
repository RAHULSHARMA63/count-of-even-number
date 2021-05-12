#include<iostream>
using namespace std;
int main()
{
	int a,i,count_even=0,sum=0;
	for(i=1;i<=5;i++)
	{
		cout<<"enter the "<< i <<" "<<" number ";
		cin>>a;
		if(a%2==0)
		{
			count_even++;
		}
		else
		{
			sum = sum+a;
		}
	
	}
	cout<<"the count of even numnber is :"<< count_even <<"\n" ;
	cout<<"sum of odd integer is :"<< sum ;
	return 0;
} 
