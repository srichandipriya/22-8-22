#include<stdio.h>
void main()
{
	int a[100][100];
	int i,j,r,c,sum;
	
	// reading 
	printf("Enter how many rows \n");
	scanf("%d",&r);
	printf("Enter how many cols \n");
	scanf("%d",&c);
	printf("Enter elements into array \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	// printing col sum
	for(i=0;i<r;i++)//i=0
	{
		sum=0;
		for(j=0;j<c;j++) // j=0,1,2  "3times"
		{
			sum=sum+a[j][i]	;
		}
		printf(" %d Col sum= %d \n",i+1,sum);		
	}
	
}
