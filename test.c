#include<stdio.h>

int WordNum(char *s)
{
	int in_word=0;  //һ��ʼ��Ϊ���ڵ�����
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
