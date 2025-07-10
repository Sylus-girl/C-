
#include<stdio.h>
#include<math.h>
int is_wanshu(int n)
{
    int sum=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            if(i!=n/i)
            {
                sum+=n/i;
            }
        }
    }

    if(sum==n)
    {
        return 1;
    }
    return 0;
}

int main()
{
    for(int i=1;i<=1000;i++)
    {
        if(is_wanshu(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}