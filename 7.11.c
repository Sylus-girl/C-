//有两个班级，分别有5和10名学生，调用一个aver函数，分别求出这两个班学生的成绩
#include <stdio.h>

int main()
{
    float aver(float a[],int n);
    float x[5]={98.5,97,91.5,60,55};
    float y[10]={67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5};
    printf("1班平均成绩:%f\n",aver(x,5));
    printf("2班平均成绩:%f",aver(y,10));
    return 0;
}

float aver(float a[],int n)
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum/n;
}