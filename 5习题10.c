//有一个分数序列，求这个数列前20项之和
//2/1,3/2,5/3,8/5,13/8,21/13...

#include<stdio.h>
int main()
{
    double fz=2.0,fm=1.0;
    double sum=0.0;
    for(int i=0;i<20;i++)
    {
        double num=fz/fm;
        sum+=num;
        float tmp=fz;
        fz=fz+fm;
        fm=tmp;
    }
    printf("前20项之和:%lf",sum);
    return 0;
}
