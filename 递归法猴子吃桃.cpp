#include<stdio.h>

int num(int n)
{ 
	if(n==10)  //第 10 天剩下 1 个桃子
		return 1;
	else
		return 2*(num(n+1)+1);  //从第 2 天开始，每天吃掉一半桃子，再吃掉 1 个桃子，直到第 10 天。
}

int main()
{
	printf("第一天的桃子数为：%d\n",num(1));	
 	return 0;
 } 



