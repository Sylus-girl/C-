//��һ��3x4�ľ���Ҫ�������������ֵ�����Ǹ�Ԫ�ص�ֵ���Լ������ڵ��кź��к�
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
    printf("max=%d\n�к�row:%d\n�к�colum:%d\n",max,hang,lie);
    return 0;
}