//有10个地区的面积，要求对他们按由小到大的顺序排列
#include<stdio.h>
int main()
{
    int a[12];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }

    printf("升序排列：\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}