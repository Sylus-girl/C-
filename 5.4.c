//��ȫϵ1000��ѧ���о��д���ļ�裬�������ﵽ10��Ԫʱ�ͽ�����ͳ�ƴ�ʱ���������Լ�ƽ��ÿ�˾�����Ŀ

#include<stdio.h>
#define SUM 100000
int main()
{
    int m,total=0,count=0;
    while(total<100000)
    {
        printf("please enter amount:");
        scanf("%d",&m);
        total+=m;
        count++;
    }

    float ave=(float)total/count;
    printf("num=%d\n",count);
    printf("aver=%.2f",ave);
    return 0;
}