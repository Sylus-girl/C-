//����������������Ҫ���������ֵ�ϴ��ߡ�Ҫ���ú������ҵ�����
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






