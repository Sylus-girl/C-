#include<stdio.h>
//指针中数据类型的作用：获取字节数据的个数 
//int类型占4个字节，char类型占1个字节，步长：指针移动一次的字节个数 ，类型占几个字节，就移动几个字节
/*int main()
{
	int a=10;
	int *p=&a;
	printf("%p\n",p);
	printf("%p\n",p+1);
	printf("%p\n",p-1);
	return 0;
}*/
int main()
{
	//用指针相加减，需保证其内存空间是连续的，数组 
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int len=sizeof(arr)/sizeof(int);
	int *p1=&arr[0];
	printf("%d\n",*p1);
	printf("%d\n",*(p1+1));
	
	int *p2=&arr[5];
	printf("%d\t",p2-p1);//计算步长的距离
	//获取数组的指针
	//int *p1=arr;
	//int *p1=arr[0]; 
	//利用循环和指针遍历数组里面的每一个元素
	for(int i=0;i<len;i++)
	{
		printf("%d\t",*p1++);
		//p1++;
	}
	printf("%zu\n",sizeof(arr));//zu是格式说明符，用来接收sizeof运算符结果 
	printf("%d\n",arr);//arr参与运算时，会退化为第一个元素的指针，记录第一个元素的地址 
	printf("%p\n",&arr);//arr获取地址不会退化，为数组的首地址 
	printf("%d\n",arr+1);//4个字节 
	printf("%d\n",&arr+1);//40个字节 
	return 0;
}
