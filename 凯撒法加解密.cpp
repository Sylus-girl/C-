#include<stdio.h>
void secret()
{
	int i,b,d;
	char m[20]; // �洢���ܺ������
	char a[20]; // �洢����
	printf("����������:");
	scanf("%s",&a);
	
	for(i=0;a[i]!='\0';i++)
	{	b=(int)a[i]; // ��ȡ�ַ��� ASCII ֵ
		
		if(b==7 || b==8 ||b==9)
		{   b=b-7;
		}
		else if(b==88 || b==89 || b==90 || b==120 || b==121 || b==122)
		{	b=b-23;
		}
		else
		{   b=b+3;
		}
		d=(char)b;   // �����ܺ�� ASCII ֵת�����ַ�
		m[i]=d; // �����ܺ���ַ����� m ����
	}
	m[i]='\0';  // ����ַ���������
	printf("���ܺ������Ϊ��%s\n",m);
}

void clear()
{ 	int i,b,d;
	char m[20]; // �洢���ܺ������
	char a[20]; // �洢����
	printf("����������:");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{	b=(int)a[i]; // ��ȡ�ַ��� ASCII ֵ
		
		if(b==48 || b==49 ||b==50)
		{   b=b+7;
		}
		else if(b==97 || b==98 || b==99)
		{	b=b+23;
		}
		else
		{   b=b-3;
		}
		d=(char)b;   // �����ܺ�� ASCII ֵת�����ַ�
		m[i]=d; // �����ܺ���ַ����� m ����
	}
	m[i]='\0';  // ����ַ���������
	printf("���ܺ������Ϊ��%s\n",m);
		
}


int main()
{	int p,e; 
	printf("��Ҫ���ܻ��ǽ��ܣ� 1-���ܣ�2-����");
	scanf("%d",&e);
	if(e==1)
		secret();
	else if(e==2)
		clear();
	 else 
	 {
        printf("��Чѡ�������� 1 �� 2��\n");
	 }
	return 0;
}

