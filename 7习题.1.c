//写两个函数，分别求其最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果，两个整数由键盘输入
#include <stdio.h>

int main()
{
    int gcd(int a,int b);
    int lcm(int a,int b);

    int x,y;
    scanf("%d,%d",&x,&y);
    printf("最大公约数:%d\n",gcd(x,y));
    printf("最小公倍数：%d\n",lcm(x,y));
    return 0;
}


int gcd(int a,int b)
{
    while(b!=0)  //a和b的最小公约数  =  b和a/b的余数的公约数
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