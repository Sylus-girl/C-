//破译密码，将每个字母编程其后的第4个字母,特别注意第23-26个字母+4之后超出了范围
#include <stdio.h>
int main()
{
    char  c;
    c=getchar();
    while(c!='\n')
    {
        if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            if(c>='w' && c<='z' || c>='W' && c<='Z')
            {
                c-=22;
            }
            else c+=4;
        }
        printf("%c",c);
        c=getchar();
    }
    printf("\n");
    return 0;
}