#include<stdio.h>

int num(int n)
{ 
	if(n==10)  //�� 10 ��ʣ�� 1 ������
		return 1;
	else
		return 2*(num(n+1)+1);  //�ӵ� 2 �쿪ʼ��ÿ��Ե�һ�����ӣ��ٳԵ� 1 �����ӣ�ֱ���� 10 �졣
}

int main()
{
	printf("��һ���������Ϊ��%d\n",num(1));	
 	return 0;
 } 



