#include<stdio.h>

int leap(int year) 
{	if(year%4==0 && year%100!=0 ||year%400==0)
		return 1;
	else
		return 0;
}

int main()
{	
	int i,N,j=0;
	printf("请输入几年后的年份："); 
	scanf("%d",&N);
	for(i=2024;i<N;i++)
	{
		if(leap(i)==1)
		{	
			printf("%d  ",i);
			j++;
			if(j%10==0)
				printf("\n");		
		}
	}
}
