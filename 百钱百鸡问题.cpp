#include<stdio.h>

int main()
{
	int a,b,c,money=100;
	for(a=0;a<=20;a++)  //最多可以买 20 只公鸡
	{
		for(b=0;b<=33;b++)	//最多可以买 33 只母鸡
		{
			for(c=0;c<=300;c+=3)	//确保c是3的倍数 ,最多可以买100只小鸡 
			{
					if (a*5+b*3+c/3==money && a+b+c==100)
					printf("公鸡数目为：%d,母鸡数目为:%d,小鸡数目为：%d\n", a, b, c);
			}
			
		}
	}
	return 0;	
}
