#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter your score (out of 100) :\n";
	cin>>a;
	if(a>=0 || a<100)
	{
		if(a<=40)
		{
			cout<<"Fail!";
		}
		else
		{
			if(a<70)
			{
				cout<<"Grade : D";
			}
			else
			{
				if(a<80)
				{
					cout<<"Grade : C";
				}
				else
				{
					if(a<90)
					{
						cout<<"Grade : B";	
					}
					else
					{
						cout<<"Grade : A";	
					}
				}
			}
		}
	}
	else
	{
	cout<<"invalid input!";
	}
}
