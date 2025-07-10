//输入一个大于3的整数，判断其是否为素数
#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
            if(n%i==0)  
            {
                return 0;  //正确逻辑应该是只要找到一个因子（即n%i==0）就返回0（非素数），所有可能的因子都检查完后仍未找到才返回1（素数）。
            }
    }
    return 1;
}

int main()
{
    int m;
    printf("请输入一个整数:\n");
    scanf("%d",&m);

    if(is_prime(m))
    {
        printf("%d是素数\n",m);
    }
    else{
        printf("%d不是素数\n",m);
    }
    return 0;
}