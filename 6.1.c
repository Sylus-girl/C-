//��10������Ԫ�����θ�ֵΪ0,1,2,3,4,5,6,7,8,9��Ҫ���������
#include<stdio.h>

int main()
{
    int a[10];
    for(int i=0;i<=9;i++)
    {
        a[i]=i;
    }
    for(int i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}