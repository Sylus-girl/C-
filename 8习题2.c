//����3���ַ���������С�����˳�����
#include<stdio.h>
#include<string.h>
#define MAX_LEN 100
int  main()
{
    char a[3][MAX_LEN];
    char *p1=a[0],*p2=a[1],*p3=a[2];
    char *temp;

    printf("������3���ַ���:\n");
    scanf("%99s",p1);
    scanf("%99s",p2);
    scanf("%99s",p3);

    if(strcmp(p1,p2)>0)
        {
            temp=p1;
            p1=p2;
            p2=temp;
        }
    if(strcmp(p1,p3)>0)
    {
        temp=p1;
        p1=p3;
        p3=temp;
    }

    if(strcmp(p2,p3)>0)
    {
        temp=p2;
        p2=p3;
        p3=temp;
    }

    printf("\n������ַ���Ϊ:\n");
    printf("%s\n%s\n%s\n",p1,p2,p3);
    return 0;
}