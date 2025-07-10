//输入3个整数，按由小到大的顺序输出
#include<stdio.h>
int main()
{
    int num[3],*p,*q;

    for(p=num;p<num+3;p++)
    {
        scanf("%d",p);
    }

    for(p=num;p<num+2;p++)
    {
        for(q=p+1;q<num+3;q++)
        {
            if(*p>*q)
            {
                int temp=*p;
                *p=*q;
                *q=temp;
            }
        }
    }

    for(p=num;p<num+3;p++)
    {
        printf("%d ",*p);
    }
    return 0;

}