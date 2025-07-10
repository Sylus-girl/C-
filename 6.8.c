//输入一行字符，统计其中有多少个单词，单词之间用空格分隔开
#include<stdio.h>
int main()
{
    char string[81];
    int c,word=0,num=0;  //初始word=0，表示还未出现新单词
    gets(string);
    for(int i=0;(c=string[i])!='\0';i++)
    {
        if(c==' ') word=0;
        else if(word==0)  //如果前一个字符为空，而且当前字符不为空，说明出现新单词
        {
            word=1;
            num++;
        }
    }
    printf("该字符串中有%d个单词\n",num);
    return 0;
}