#include<stdio.h>

int countchar(char* str,char target)
{
    int count=0;
    while(*str)
    {
        if(*str==target) count++;
        str++;
    }
    return count;
}


int main()
{
    char str[]="programming";
    char target='m';
    printf("字符'%c' 出现了%d 次\n",target,countchar(str,target));
    return 0;
}






