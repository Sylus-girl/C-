//��ǰ20�����Ľ׳�֮��
#include<stdio.h>

int main()
{
    double sum=0;
    double num=1;
 
    for(int i=1;i<=20;i++)
    {
        for(int j=1;j<=i;j++)
        {
            num*=j;
        }
        sum+=num;
        num=1;
    }
    printf("���Ϊ:%.0f\n",sum);
    return 0;
}