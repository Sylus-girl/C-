//���1000֮�ڵ���������
//������ָ��һ����ǡ�õ�����������֮��

#include<stdio.h>
#include<math.h>

int main()
{
    printf("1000���ڵ�������:\n");
    for(int i=2;i<=1000;i++)
    {
        int sum=1;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                sum+=j;
                if(j!=i/j)
                {
                    sum+=i/j;    
                }

            }
        }

        if(sum==i)
        {
            printf("%d ",i);
        }
    }

    return 0;
}