//�Ӽ�������һ����д��ĸ������ʾ������ʾ��Ӧ��Сд��ĸ
//�ı�ASCLL��ֵ����
#include<stdio.h>
int main()
{
//��getchar()�����Ӽ��̶���һ����д��ĸ������ת��ΪСд��ĸ��Ȼ����putchar���������Сд��ĸ
    char c1,c2;
    c1=getchar();
    c2=c1+32;
    putchar(c2);
    putchar('\n');
    return 0;
}



