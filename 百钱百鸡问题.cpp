#include<stdio.h>

int main()
{
	int a,b,c,money=100;
	for(a=0;a<=20;a++)  //�������� 20 ֻ����
	{
		for(b=0;b<=33;b++)	//�������� 33 ֻĸ��
		{
			for(c=0;c<=300;c+=3)	//ȷ��c��3�ı��� ,��������100ֻС�� 
			{
					if (a*5+b*3+c/3==money && a+b+c==100)
					printf("������ĿΪ��%d,ĸ����ĿΪ:%d,С����ĿΪ��%d\n", a, b, c);
			}
			
		}
	}
	return 0;	
}
