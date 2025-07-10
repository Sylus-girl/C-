#include<stdio.h>
int main()
{
    int arr[3][4]={{1,2,3,0},{4,5,6,0},{7,8,9,0}};
    int m[4][3];
    int i,j;
    printf("数组a:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%5d",arr[i][j]);
            m[j][i]=arr[i][j];
        }
        printf("\n");
    }

    printf("逆置后，数组b:\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%5d",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}