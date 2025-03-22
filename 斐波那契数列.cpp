#include<stdio.h>

int main()
{
	int i;
	int num[15];
	
	num[0]=1;
	num[1]=1;
	
	for(i=2;i<15;i++)
	{
		num[i]=num[i-1]+num[i-2];
	}
	printf("斐波那契数列前15项：");
	
	for(i=0;i<15;i++)
	{
			printf("%d  ",num[i]);	
	}
	printf("\n");
	
	return 0;	
 } 
