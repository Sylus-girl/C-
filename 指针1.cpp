#include<stdio.h>
//ָ�������е������ʱ�ı�����ָ�����ֵ�������洢������ 
//�����������ڵ��ú���֮ǰ����������ǰ֪�������Ĳ����ͷ������͵���Ϣ 
void swap(int *p1,int *p2); 
int main()
{
	int a=10;
	int b=20;
	printf("����ǰ��%d,%d\n",a,b);
	swap(&a,&b);//���������ַ 
	printf("���ú�%d,%d",a,b);
	return 0;
}
/*void swap(int num1,int num2)
{
	int temp=num1;
	num1=num2;
	num2=temp;
}
����ǰ��a,b��δ������������*/
void swap(int *p1,int *p2)
{
	int temp=*p1;//ֱ�ӶԱ������иı� 
	*p1=*p2;
	*p2=temp;
}



void get(int arr[],int len,int *max,int *min);
int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int len=sizeof(arr)/sizeof(int);//�������鳤�� 
	int max=arr[0];
	int min=arr[0];
	
	get(arr,len,&max,&min);//�������Ա�֤���ֵ����Сֵһֱ�ᷢ���ı� 
	printf("�������ֵ��%d\n",max);
	printf("������Сֵ��%d\n",min);
	return 0;
}
void get(int arr[],int len,int *max,int *min)
{
	//���������ֵ 
	//int max=arr[0];
	*max=arr[0];
	for(int i=1;i<len;i++)
	{
		if(arr[i]>*max)
			*max=arr[i];
	}
	//��������Сֵ
	//int min=arr[0];
	*min=arr[0];
	for(int i=1;i<len;i++)
	{
		if(arr[i]<*min)
			*min=arr[i];
	}   
	//��η��ض��ֵ
	//int res[]={max,min};  
}*/



int get(int num1,int num2,int *res);
int main()
{
	int a=10;
	int b=4;
	int res=0;
	int flag=get(a,b,&res);//��ȡ������ȡ���� 
	if(!flag || flag==0)//��״̬�����ж�,!flag����flag�Ƿ�Ϊ0����flagΪ0��!flag��Ϊ1���棩�������� 
		printf("��ȡ��������Ϊ��%d\n",res); 
}
//����ֵ��ʾ�����״̬ 0���� 1������ 
int get(int num1,int num2,int *res)
{
	if(num2==0)
		return 1;
	*res=num1%num2;
	return 0;	
}
