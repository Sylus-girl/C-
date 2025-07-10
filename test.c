#include<stdio.h>

int WordNum(char *s)
{
	int in_word=0;  //一开始认为不在单词内
	while(*s!='\0')
		{
			if(*s!='\t')
			{
				if(!in_word)
				{
					in_word=1;
					count++;
				}	
			}
			else in_word=0; 
			
		s++;

		}
		return count;
}


int main()
{
	char s[1000];
	scanf("%[^\n]",s);
	int num=WordNum(s);
	printf("%d\n",num);
	return 0;
}
