//输入两个正整数，求最大公约数和最小公倍数
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
    printf("最大公约数为：%d\n",gcd(m,n));
    printf("最小公倍数为:%d",gmd(m,n));
    return 0;
}