//要求输出100~200的不能被3整除的数

#include <stdio.h>
/*
int main()
{
    for(int i=100;i<=200;i++)
    {
        if(i%3!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
*/

int main()
{
    for(int i=100;i<=200;i++)
    {
        if(i%3==0) continue;
        else printf("%d ",i);
    }
    return 0;
}