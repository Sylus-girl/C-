//输出1到5的阶乘值
#include<stdio.h>
int main()
{
    int fac(int n);
    for(int i=1;i<=5;i++)
    {
        printf("%d!=%d\n",i,fac(i));
    }
    return 0;
}



int fac(int n)
{
    static int f=1;  //静态变量，第二次调用时会延续前面的值。
    f*=n;
    return f;
}



