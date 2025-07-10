#include<stdio.h>
#include<string.h>

void sort(char *name[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				char *tmp=name[i];
				name[i]=name[j];
				a[j]=tmp;
			}
		}
	}
	
}

int main() 
{
	char *name[]={"ËïÎò¿Õ£¬°Ë½ä£¬ÌÆÉ®£¬°×¹Ç¾«"};
	int m=sizeof(name)/sizeof(name[0]);
	sort(char *name[],int n);
	
	
	
	return 0;
}
