#include<stdio.h>
main()
{
	int arr[3][4];
	int arr1[4][2], result[3][2];
	int i=0,j=0,sum=0;
	
	printf("\n\n-------------------Welcome to the multiplication table---------------------\n");
	
//	entry value of array1 
	printf("\nEnter the value of array 1 : ");

	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
//			printf("\nEnter the value of %d %d : ", i,j);
			scanf("%d", &arr[i][j]);
//			printf("\t");
		}
//		printf("\n");
	}
//	//getting value of array 1
//	printf("\nThe value of array 1 is :\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		
//		{
//			printf("\t%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
	
	printf("\nEnter the value of array 2 : ");
	//entry value
	printf("\n");
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			
//			printf("\nEnter the value of %d %d : ", i,j);
			scanf("%d", &arr[i][j]);
//			printf("\t");
		}
	printf("\t");
	}
//	//getting value
//	for(m=0;m<2;m++)
//	{
//		for(n=0;n<2;n++)
//		{
//			printf("\t%d", arr1[m][n]);
//		}
//		printf("\n");
//	}
//	printf("\n\nNow let we do multiplication \n\n");


	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			for(int k=0;k<4;k++)
			{
				sum+=arr[i][k]*arr1[k][j];
			}
			result[i][j]=sum;
			sum=0;
		}
	}




//	print the reult
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",result[i][j]);
			result[i][j]=sum;
			sum=0;
		}
		printf("\n");
	}



}
