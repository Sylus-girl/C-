#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,s=0;
	for(i=2;i<=1001;i++)
	{
		int flag=1;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{	
				flag=0;	
				break;		
			}
	}
		if(flag==1)
		{
			s++;
			printf("�����У�%d\n",i);
			
	}
}
	printf("��������Ϊ��%d\n",s);
	return 0;
}
		 
