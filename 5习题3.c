//���������������������Լ������С������
#include<stdio.h>

int gcd(int a,int b)
{
    while(b!=0)
    {
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int gmd(int x,int y)
{
    return x*y/gcd(x,y);
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("���Լ��Ϊ��%d\n",gcd(m,n));
    printf("��С������Ϊ:%d",gmd(m,n));
    return 0;
}