//有一个一维数组score，内放10个学生成绩，求平均成绩
#include<stdio.h>

int main()
{

    float aver(float a[]);
    float score[10];
    for(int i=0;i<10;i++)
    {
        scanf("%f",&score[i]);
    }
    printf("average is : %f",aver(score));
    return 0;
}

float aver(float a[])
{
    float c=0;
    for(int i=0;i<10;i++)
    {
        c+=a[i];
    }
    return c/10;
}