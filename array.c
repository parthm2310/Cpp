#include<stdio.h>
main()
{
	int i,j,A[3][3],sum;
	printf("Enter the matrix elements:");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nThe matrix is as follows:\n");
	
		for(i=0;i<=2;i++)
	{
		printf("\t\n");
		for(j=0;j<=2;j++)
		{
			printf("\t%d",A[i][j]);
		}
	}
for(i=0;i<3;i++)
{
	for(j=0;j<=2;j++)
	{
		if(i==j)
		{
		sum+=A[i][j];	
		}	
	}
}
printf("\n\nThe sum of the diagonal elements of the matrix is:%d",sum);
}
