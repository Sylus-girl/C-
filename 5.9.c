//����һ������3���������ж����Ƿ�Ϊ����
#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
            if(n%i==0)  
            {
                return 0;  //��ȷ�߼�Ӧ����ֻҪ�ҵ�һ�����ӣ���n%i==0���ͷ���0���������������п��ܵ����Ӷ���������δ�ҵ��ŷ���1����������
            }
    }
    return 1;
}

int main()
{
    int m;
    printf("������һ������:\n");
    scanf("%d",&m);

    if(is_prime(m))
    {
        printf("%d������\n",m);
    }
    else{
        printf("%d��������\n",m);
    }
    return 0;
}