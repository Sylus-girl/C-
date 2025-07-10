//在全系1000名学生中举行慈善募捐，当总数达到10万元时就结束，统计此时捐款的人数以及平均每人捐款的数目

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