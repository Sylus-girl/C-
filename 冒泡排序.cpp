#include<stdio.h>
int main()
{
	int a[]={12, 0, 10, 9, 8, -1, 21, -6};
	int i,j,temp;
	for(i=0;i<8;i++)
		{
			for(j=0;j<7-i;j++)
			{
				if (a[j]>a[j+1])
					
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}				
		}
	for(i=0;i<8;i++)
	{
		printf("%d\t",a[i]);
	}
return 0;		
}
	
	
