#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
		for(int j=2;j<=sqrt(n);j++)
		{
			if(n%j==0)
			{
				return 0;
			}
		}
	return 1;
}

int main()
{
	int count=0;
	for(int i=200;i<=300;i++)
	{
		if(is_prime(i))
		{
			printf("%d ",i);
			count++;
			if(count%6==0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}