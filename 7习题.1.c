//д�����������ֱ��������Լ������С���������������������������������������������������ɼ�������
#include <stdio.h>

int main()
{
    int gcd(int a,int b);
    int lcm(int a,int b);

    int x,y;
    scanf("%d,%d",&x,&y);
    printf("���Լ��:%d\n",gcd(x,y));
    printf("��С��������%d\n",lcm(x,y));
    return 0;
}


int gcd(int a,int b)
{
    while(b!=0)  //a��b����С��Լ��  =  b��a/b�������Ĺ�Լ��
    {
       int t=b;
       b=a%b;
       a=t;
    }
    return a;
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}