//有一篇文章，共有3行文字，每行有80个字符，要求分别统计其中的英文大写字母、小写字母、数字、空格以及其他字符的个数
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char text[3][81];
    int upper=0,lower=0,digit=0,space=0,other=0;
    printf("请输入3行文字(每行最多80字符):\n");
    for(int i=0;i<3;i++)
    {
        fgets(text[i],sizeof(text[i]),stdin);
        text[i][strcspn(text[i],'\n')]='\0';
    }
    



    return 0;
}