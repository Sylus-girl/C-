//��ѡ�񷨶�10������������
#include<stdio.h>
int main()
{
    int arr[10];
    printf("������10������\n");
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
            if(arr[mindex]>arr[j]) //�Ƚϵ�ǰԪ�غ����δ���������Ԫ�صĴ�С���ҳ���Сֵ����
            {
                mindex=j;
            }
        } 

        if(mindex!=i) //�����ǰԪ������λ�ò�����Сֵ���ڵ�λ��
        {
            tmp=arr[i];   //�������ߵ�ֵ������Сֵ������ȷλ��
            arr[i]=arr[mindex];
            arr[mindex]=tmp;
        }
    }

    printf("�����������С����Ϊ��\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}