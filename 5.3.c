//while 和 do...while 的比较
#include<stdio.h>


int main()
{
    int i,sum=0;
    printf("enter i,i=?");
    scanf("%d",&i); 
    while(i<=10)
    {
        sum+=i;
        i++;
    }
    printf("sum=%d,i=%d\n",sum,i);
    return 0;
}


/*
int main()
{
    int i,sum=0;
    printf("enter i,i=？");
    scanf("%d",&i);
    do
    {
        sum+=i;
        i++;
    } while(i<=10);
    
    printf("sum=%d,i=%d\n",sum,i);
    return 0;
}

*/
