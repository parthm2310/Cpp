#include<stdio.h>
int lcm(int a,int b);
int main()
{
	int no1,no2;
	printf("Enter the first number:");
	scanf("%d",&no1);
	printf("Enter the second number:");
	scanf("%d",&no2);
	printf("\nLCM of these two numbers is:%d",lcm(no1,no2));
}	
	
int lcm(int a,int b)
{
	static int check;
	check+=a;
		if( check % a == 0 && check % b == 0 )
		return check;
	return lcm(a,b); 
}
