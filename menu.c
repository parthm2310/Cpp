#include<stdio.h>
main()
{
	int choice;
	printf("Enter a no. from 1-5:\n");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			printf("Food item: Burger \nPrice: Rs.129\n");
			break;
		case 2:
			printf("Food item: Pizza \nPrice: Rs.239 \n");
			break;
		case 3:
			printf("Food item: Pasta\nPrice: Rs.179\n");
			break;
		case 4:
			printf("Food item: Sandwich\nPrice: Rs.149 \n");
			break;
		case 5:
			printf("Food item: French Fries \nPrice: Rs.99 \n");
			break;				
	}
}
