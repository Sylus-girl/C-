#include<stdio.h>
#include<math.h>  //引入数学库
#include<stdlib.h> //引入标准库，用于生成随机数
#include<time.h>  //引入时间库，用于获取当前时间

void way1()
{
	double pi=0.0;
	int n=100;
	for(int i=0;i<n;i++)
		{
			pi+=1.0/pow(16,i)* (4.0 / (8 * i + 1) - 2.0 / (8 * i + 4) - 1.0 / (8 * i + 5) - 1.0 / (8 * i + 6));
		}
	 printf("π的值为%.10f\n", pi);
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
    printf("π的值为%.10f\n", pi);
}

void way3()
{
	int nums=1000000;
	int hits=0;
	for(int i=0;i<nums;i++)
	{
		double x = ((double)rand() / RAND_MAX);    // 随机生成x坐标
        double y = ((double)rand() / RAND_MAX);   // 随机生成y坐标
		double dist = sqrt(x * x + y * y); 
		if (dist <= 1.0) 
		{
            hits++;		
		}
	 }
    double pi = 4.0 * hits / nums;
    printf("圆周率：%.10f\n", pi);
}

int main() 
{
    srand(time(NULL));  
    char an1 = '0'; 
    while (an1 != '4') {
        printf("\n----------欢迎使用xxxxxxx系统----------\n");
        printf("请选择你所需要进行的操作(输入对应数字)：\n");
        printf("    1.功能一\n");
        printf("    4.退出操作\n");
        printf("请输入你的选择：");
        scanf(" %c", &an1); 
        
         if (an1 == '1') 
		 {
            char an2 = '0';  
            while (an2 != '4') 
			{
                printf("\n当前为功能一，请选择操作(输入对应数字)：\n");
                printf("    (1)功能1.1：公式法1求圆周率\n");
                printf("    (2)功能1.2：公式法2求圆周率\n");
                printf("    (3)功能1.3：蒙特卡罗法求圆周率\n");
                printf("    (4)返回上级操作\n");
                printf("请输入你的选择：");
                scanf(" %c", &an2);

                if (an2 == '1') 
				{
                    printf("\n已进入功能1.1\n");
                    way1();
                } 
				
				
				else if (an2 == '2') 
				{
                    printf("\n已进入功能1.2\n");
                    way2();
                } 
				
				
				else if (an2 == '3')
				 {
                    printf("\n已进入功能1.3\n");
                    way3();
                }
				 
				 else if (an2 == '4')
				 {
                    break; 
                } 
				
				else 
				{
                    printf("无效选择，请重新输入！\n");
                }
                printf("按回车键继续...");
                getchar();  
            }
            
        } 
		else if (an1 == '4') 
		{
            printf("退出操作\n");
        
		} 
		else 
		{
            printf("无效选择，请重新输入！\n");
        }
    }

    return 0;
}
