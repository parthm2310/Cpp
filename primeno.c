#include<stdio.h>
int prime(int a,int b);
main()
{
	int num,check;
	printf("Enter the number that you want to check if it is prime or not:");
	scanf("%d",&num);
	check = prime(num,num/2);
	if(check==1)
	{
		printf("%d is a prime number",num);
	}
	else
	{
		printf("%d is not a prime number",num);
	}
return 0;
}
int prime(int a,int b)
{
	if(b==1)
	{
		return 1;
	}
	else
	{
		if(a%b==0)
		{
			return 0;
		}
		else
		{
			return prime(a,b-1);
		}
	}
}

