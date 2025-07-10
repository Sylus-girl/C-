//用选择法对数组中10整数按由小到大排序
#include<stdio.h>

int main()
{
    int a[10]={5,9,44,25,64,87,64,12,34,54};
    int min_index;
    for(int i=0;i<9;i++)
    {
        min_index=i;
        for(int j=i+1;j<10;j++)
        {
            if(a[min_index]>a[j])
        {
            min_index=j;
        } 
        }
            int temp=a[min_index];
            a[min_index]=a[i];
            a[i]=temp;

    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}