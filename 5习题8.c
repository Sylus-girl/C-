//������е�ˮ�ɻ���
#include<stdio.h>
#include<math.h>

int main()
{
    printf("ˮ�ɻ����У� ");
    for(int i=100;i<1000;i++)
    {
        int a=i%10;
        int b=i/10%10;
        int c=i/100;
        if(pow(a,3)+pow(b,3)+pow(c,3)==i)
            {
                printf("%d ",i);
            }
    }
    return 0;
}