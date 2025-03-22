#include <stdio.h>

int main()
{
	int i,j,s;
	for(i=1;i<=9;i++)
	{
	    for(j=1;j<=i;j++)
			printf("%dx%d=%2d\t",j,i,j*i);
		printf("\n");
	
	}	
	
	printf("\n");
	for(i=9;i>=1;i--)
	{	
		for(j=1;j<=i;j++)
			printf("%dx%d=%2d\t",j,i,j*i);
		printf("\n");
				
	}
	
	return 0;	
}

























