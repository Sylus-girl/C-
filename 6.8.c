//����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ָ���
#include<stdio.h>
int main()
{
    char string[81];
    int c,word=0,num=0;  //��ʼword=0����ʾ��δ�����µ���
    gets(string);
    for(int i=0;(c=string[i])!='\0';i++)
    {
        if(c==' ') word=0;
        else if(word==0)  //���ǰһ���ַ�Ϊ�գ����ҵ�ǰ�ַ���Ϊ�գ�˵�������µ���
        {
            word=1;
            num++;
        }
    }
    printf("���ַ�������%d������\n",num);
    return 0;
}