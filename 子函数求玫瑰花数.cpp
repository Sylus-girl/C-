#include<stdio.h>

int rose(int m)
{
	int a,b,c,d;
	a=m%10;
	b=m/10%10;
	c=m/100%10;
	d=m/1000%10;
	if(a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d==m)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{	
	int i,s=0; 
	for(i=1000;i<=10001;i++)
	{
		if(rose(i))
		{
			s++;
		printf("玫瑰花数有：%d\n",i);
		}
	}
	printf("玫瑰花总数有：%d个",s); 
	return 0;	
}

