//输出所有的水仙花数
#include<stdio.h>
#include<math.h>

int main()
{
    printf("水仙花数有： ");
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