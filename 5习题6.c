//求前20个数的阶乘之和
#include<stdio.h>

int main()
{
    double sum=0;
    double num=1;
 
    for(int i=1;i<=20;i++)
    {
        for(int j=1;j<=i;j++)
        {
            num*=j;
        }
        sum+=num;
        num=1;
    }
    printf("结果为:%.0f\n",sum);
    return 0;
}