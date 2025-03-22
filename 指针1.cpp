#include<stdio.h>
//指针最大的有点可以随时改变其所指向的数值变量所存储的数据 
//函数声明放在调用函数之前，编译器提前知道函数的参数和返回类型等信息 
void swap(int *p1,int *p2); 
int main()
{
	int a=10;
	int b=20;
	printf("调用前：%d,%d\n",a,b);
	swap(&a,&b);//传入变量地址 
	printf("调用后：%d,%d",a,b);
	return 0;
}
/*void swap(int num1,int num2)
{
	int temp=num1;
	num1=num2;
	num2=temp;
}
调用前后a,b并未发生发生互换*/
void swap(int *p1,int *p2)
{
	int temp=*p1;//直接对变量进行改变 
	*p1=*p2;
	*p2=temp;
}



void get(int arr[],int len,int *max,int *min);
int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int len=sizeof(arr)/sizeof(int);//计算数组长度 
	int max=arr[0];
	int min=arr[0];
	
	get(arr,len,&max,&min);//这样可以保证最大值，最小值一直会发生改变 
	printf("数组最大值：%d\n",max);
	printf("数组最小值：%d\n",min);
	return 0;
}
void get(int arr[],int len,int *max,int *min)
{
	//求数组最大值 
	//int max=arr[0];
	*max=arr[0];
	for(int i=1;i<len;i++)
	{
		if(arr[i]>*max)
			*max=arr[i];
	}
	//求数组最小值
	//int min=arr[0];
	*min=arr[0];
	for(int i=1;i<len;i++)
	{
		if(arr[i]<*min)
			*min=arr[i];
	}   
	//如何返回多个值
	//int res[]={max,min};  
}*/



int get(int num1,int num2,int *res);
int main()
{
	int a=10;
	int b=4;
	int res=0;
	int flag=get(a,b,&res);//调取函数获取余数 
	if(!flag || flag==0)//对状态进行判断,!flag检验flag是否为0，若flag为0，!flag将为1（真）条件成立 
		printf("获取到的余数为：%d\n",res); 
}
//返回值表示计算的状态 0正常 1不正常 
int get(int num1,int num2,int *res)
{
	if(num2==0)
		return 1;
	*res=num1%num2;
	return 0;	
}
