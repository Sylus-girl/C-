#include<stdio.h>

int main()
{
	int a[]={12, 0, 10, 9, 8, -1, 21, -6};
	int i,j,key,temp;
	for(i=1;i<=7;i++)
		{
			key=a[i];
			j=i-1;
			while (j>=0 && a[j]>key)
				{
					a[j+1]=a[j];
					j--;
					a[j+1]=key;
				}						
		}
	for(i=0;i<=7;i++)
		printf("%d\t",a[i]);
return 0;
}
