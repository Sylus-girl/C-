//����һ���ַ����б����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ��������ǣ���ת����Ȼ��������õ����ַ���
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    
    ch=(ch>='A' && ch<='Z') ? (ch+32) : ch;
    printf("%c\n",ch);

    /*
        if(ch>='A' && ch<='Z')
    {
        ch+=32;
        printf("%c\n",ch);
    }
    else printf("%c\n",ch);
    */
    return 0;
}