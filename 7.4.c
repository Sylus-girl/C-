///��������ʵ������һ�������������֮��
#include <stdio.h>
int main()
{
    float sum(float x,float y);
    float a,b;
    scanf("%f,%f",&a,&b);
    printf("sum is %f",sum(a,b));
    return 0;
}

float sum(float x,float y)
{
    return x+y;
}

