//输入两个浮点数，要求输出其中值较大者。要求用函数来找到大数
#include<stdio.h>

int main()
{
    int max(float a,float b);
    float x,y;
    int c;
    scanf("%f,%f",&x,&y);
    c=max(x,y);
    printf("max = %d\n",c);
    return 0;
}

int max(float a,float b)
{
    return (a>b) ? a : b;
}






