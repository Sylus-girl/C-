#include<stdio.h>
void secret()
{
	int i,b,d;
	char m[20]; // 存储加密后的密文
	char a[20]; // 存储明文
	printf("请输入明文:");
	scanf("%s",&a);
	
	for(i=0;a[i]!='\0';i++)
	{	b=(int)a[i]; // 获取字符的 ASCII 值
		
		if(b==7 || b==8 ||b==9)
		{   b=b-7;
		}
		else if(b==88 || b==89 || b==90 || b==120 || b==121 || b==122)
		{	b=b-23;
		}
		else
		{   b=b+3;
		}
		d=(char)b;   // 将加密后的 ASCII 值转换回字符
		m[i]=d; // 将加密后的字符存入 m 数组
	}
	m[i]='\0';  // 添加字符串结束符
	printf("加密后的密文为：%s\n",m);
}

void clear()
{ 	int i,b,d;
	char m[20]; // 存储加密后的密文
	char a[20]; // 存储明文
	printf("请输入密文:");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{	b=(int)a[i]; // 获取字符的 ASCII 值
		
		if(b==48 || b==49 ||b==50)
		{   b=b+7;
		}
		else if(b==97 || b==98 || b==99)
		{	b=b+23;
		}
		else
		{   b=b-3;
		}
		d=(char)b;   // 将解密后的 ASCII 值转换回字符
		m[i]=d; // 将解密后的字符存入 m 数组
	}
	m[i]='\0';  // 添加字符串结束符
	printf("解密后的明文为：%s\n",m);
		
}


int main()
{	int p,e; 
	printf("你要加密还是解密？ 1-加密，2-解密");
	scanf("%d",&e);
	if(e==1)
		secret();
	else if(e==2)
		clear();
	 else 
	 {
        printf("无效选择，请输入 1 或 2。\n");
	 }
	return 0;
}

