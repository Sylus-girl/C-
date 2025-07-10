//用选择法对10个数进行排序
#include<stdio.h>
int main()
{
    int arr[10];
    printf("请输入10个整数\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int mindex,tmp;
    for(int i=0;i<9;i++)
    {
        mindex=i;
        for(int j=i+1;j<10;j++)
        {
            if(arr[mindex]>arr[j]) //比较当前元素和其后还未排序的所有元素的大小，找出最小值索引
            {
                mindex=j;
            }
        } 

        if(mindex!=i) //如果当前元素所在位置不是最小值所在的位置
        {
            tmp=arr[i];   //交换两者的值，把最小值放在正确位置
            arr[i]=arr[mindex];
            arr[mindex]=tmp;
        }
    }

    printf("排序后的数组从小到大为：\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}