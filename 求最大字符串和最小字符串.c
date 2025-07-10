#include<stdio.h>
#include<string.h>

int main()
{
    char *str[]={"apple","banana","cherry","data","elderberry"};
    int n=sizeof(str)/sizeof(str[0]);
    char *max=str[0];
    char *min=str[0];

    for(int i=0;i<n;i++)
        {
            if(strcmp(str[i],max)>0)
            {
                max=str[i];
            }

            if(strcmp(min,str[i])>0)
            {
                min=str[i];
            }
        }

        printf("最大字符串:%s\n",max);
        printf("最小字符串:%s\n",min);
        return 0;
}