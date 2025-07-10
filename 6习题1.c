//用筛选法求100之内的素数
//想象你有一个筛子，上面放着从2开始的自然数。每次找到一个素数，就把它的倍数从筛子中"筛掉"（标记为合数），最后留在筛子上的就是素数。
#include<stdio.h>
#include<math.h>

int main()
{
    int n=100;
    int prime[101]={0};   // 初始化数组，0表示素数，1表示合数
    for(int p=2;p<=sqrt(n);p++) 
    {
        if(prime[p]==0)  //如果p是素数
        {
            for(int i=p*p;i<=n;i+=p)
            {
                prime[i]=1;  //标记p的倍数为合数
            }
        }
    }

       printf("100以内的素数：\n");
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}



