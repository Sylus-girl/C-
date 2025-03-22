#include<stdio.h>
#include<math.h>  //������ѧ��
#include<stdlib.h> //�����׼�⣬�������������
#include<time.h>  //����ʱ��⣬���ڻ�ȡ��ǰʱ��

void way1()
{
	double pi=0.0;
	int n=100;
	for(int i=0;i<n;i++)
		{
			pi+=1.0/pow(16,i)* (4.0 / (8 * i + 1) - 2.0 / (8 * i + 4) - 1.0 / (8 * i + 5) - 1.0 / (8 * i + 6));
		}
	 printf("�е�ֵΪ%.10f\n", pi);
}

void way2()
{
	double total = 0.0, a = 1.0, b = 1.0, c = 1.0;
	while (fabs(c) >= 1e-6) 
	{
        total += c;
        b += 2;
        a=-a;
        c=a/b;
}
	 double pi = total * 4;
    printf("�е�ֵΪ%.10f\n", pi);
}

void way3()
{
	int nums=1000000;
	int hits=0;
	for(int i=0;i<nums;i++)
	{
		double x = ((double)rand() / RAND_MAX);    // �������x����
        double y = ((double)rand() / RAND_MAX);   // �������y����
		double dist = sqrt(x * x + y * y); 
		if (dist <= 1.0) 
		{
            hits++;		
		}
	 }
    double pi = 4.0 * hits / nums;
    printf("Բ���ʣ�%.10f\n", pi);
}

int main() 
{
    srand(time(NULL));  
    char an1 = '0'; 
    while (an1 != '4') {
        printf("\n----------��ӭʹ��xxxxxxxϵͳ----------\n");
        printf("��ѡ��������Ҫ���еĲ���(�����Ӧ����)��\n");
        printf("    1.����һ\n");
        printf("    4.�˳�����\n");
        printf("���������ѡ��");
        scanf(" %c", &an1); 
        
         if (an1 == '1') 
		 {
            char an2 = '0';  
            while (an2 != '4') 
			{
                printf("\n��ǰΪ����һ����ѡ�����(�����Ӧ����)��\n");
                printf("    (1)����1.1����ʽ��1��Բ����\n");
                printf("    (2)����1.2����ʽ��2��Բ����\n");
                printf("    (3)����1.3�����ؿ��޷���Բ����\n");
                printf("    (4)�����ϼ�����\n");
                printf("���������ѡ��");
                scanf(" %c", &an2);

                if (an2 == '1') 
				{
                    printf("\n�ѽ��빦��1.1\n");
                    way1();
                } 
				
				
				else if (an2 == '2') 
				{
                    printf("\n�ѽ��빦��1.2\n");
                    way2();
                } 
				
				
				else if (an2 == '3')
				 {
                    printf("\n�ѽ��빦��1.3\n");
                    way3();
                }
				 
				 else if (an2 == '4')
				 {
                    break; 
                } 
				
				else 
				{
                    printf("��Чѡ�����������룡\n");
                }
                printf("���س�������...");
                getchar();  
            }
            
        } 
		else if (an1 == '4') 
		{
            printf("�˳�����\n");
        
		} 
		else 
		{
            printf("��Чѡ�����������룡\n");
        }
    }

    return 0;
}
