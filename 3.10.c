//从键盘输入一个大写字母，在显示屏上显示对应的小写字母
//改变ASCLL码值即可
#include<stdio.h>
int main()
{
//用getchar()函数从键盘读入一个大写字母，把它转换为小写字母，然后用putchar函数输入该小写字母
    char c1,c2;
    c1=getchar();
    c2=c1+32;
    putchar(c2);
    putchar('\n');
    return 0;
}



