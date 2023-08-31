

#include"stdio.h"

main()
{
	int a[2][3] ;
	
	printf("\n\nInput Array Element : ");
	
	for ( int  i = 0 ; i < 2 ; i++)
	{
		for (int j = 0 ; j < 3 ; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\nEven numbers are:");

	
	
for ( int  i = 0 ; i < 2 ; i++)
	{
		for (int j = 0 ; j < 3 ; j++)
		{
			if(a[i][j]%2==0)
			printf("%d\t ",a[i][j]);
		}
		
	
	}
	
	
	
	printf("\n\nODD numbers are:");
for ( int  i = 0 ; i < 2 ; i++)
	{
		for (int j = 0 ; j < 3 ; j++)
		{
			if(a[i][j]%2==1)
			printf("%d\t",a[i][j]);
		}
		
		
	}
	
}
