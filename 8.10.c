//用指针法对10个整数按由大到小的顺序排序
#include<stdio.h>

void sort(int a[],int n)
{
    int i,j,k,t;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[k]<a[j])
            {
                k=j;
            }
        }
        t=a[i];
        a[i]=a[k];
        a[k]=t;
    }
}



int main()
{
    int i,*p,a[10];
    p=a;
    for(i=0;i<10;i++)
    {
        scanf("%d",p++);
    }
    p=a;
    sort(p,10);
    for(i=0;i<10;i++)
    {
        printf("%d ",*p);
        p++;
    }
    return 0;

}

















