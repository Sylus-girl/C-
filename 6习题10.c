//��һƪ���£�����3�����֣�ÿ����80���ַ���Ҫ��ֱ�ͳ�����е�Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֡��ո��Լ������ַ��ĸ���
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char text[3][81];
    int upper=0,lower=0,digit=0,space=0,other=0;
    printf("������3������(ÿ�����80�ַ�):\n");
    for(int i=0;i<3;i++)
    {
        fgets(text[i],sizeof(text[i]),stdin);
        text[i][strcspn(text[i],'\n')]='\0';
    }
    



    return 0;
}