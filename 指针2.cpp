#include<stdio.h>
//ָ�����������͵����ã���ȡ�ֽ����ݵĸ��� 
//int����ռ4���ֽڣ�char����ռ1���ֽڣ�������ָ���ƶ�һ�ε��ֽڸ��� ������ռ�����ֽڣ����ƶ������ֽ�
/*int main()
{
	int a=10;
	int *p=&a;
	printf("%p\n",p);
	printf("%p\n",p+1);
	printf("%p\n",p-1);
	return 0;
}*/
int main()
{
	//��ָ����Ӽ����豣֤���ڴ�ռ��������ģ����� 
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int len=sizeof(arr)/sizeof(int);
	int *p1=&arr[0];
	printf("%d\n",*p1);
	printf("%d\n",*(p1+1));
	
	int *p2=&arr[5];
	printf("%d\t",p2-p1);//���㲽���ľ���
	//��ȡ�����ָ��
	//int *p1=arr;
	//int *p1=arr[0]; 
	//����ѭ����ָ��������������ÿһ��Ԫ��
	for(int i=0;i<len;i++)
	{
		printf("%d\t",*p1++);
		//p1++;
	}
	printf("%zu\n",sizeof(arr));//zu�Ǹ�ʽ˵��������������sizeof�������� 
	printf("%d\n",arr);//arr��������ʱ�����˻�Ϊ��һ��Ԫ�ص�ָ�룬��¼��һ��Ԫ�صĵ�ַ 
	printf("%p\n",&arr);//arr��ȡ��ַ�����˻���Ϊ������׵�ַ 
	printf("%d\n",arr+1);//4���ֽ� 
	printf("%d\n",&arr+1);//40���ֽ� 
	return 0;
}
