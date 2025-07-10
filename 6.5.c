//有一个3x4的矩阵，要求编程序求出其中值最大的那个元素的值，以及其所在的行号和列号
#include<stdio.h>
int main()
{
    int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
    int max=a[0][0];
    int hang,lie;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                hang=i;
                lie=j;
            }
        }
    }
    printf("max=%d\n行号row:%d\n列号colum:%d\n",max,hang,lie);
    return 0;
}