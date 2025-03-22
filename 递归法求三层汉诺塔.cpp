#include <stdio.h>

void hanoi(int n, char *source, char *fu, char *target) {
    if (n == 1) 
	{
        printf("将圆盘1从 %s 移动到 %s\n", source, target); 
    } 
	else 
	{  
        hanoi(n - 1, source, target, fu);         // 先将 n-1 个圆盘从 source 移动到 fu
        printf("将圆盘%d从 %s 移动到 %s\n", n, source, target);         // 打印移动第 n 个圆盘
        hanoi(n - 1, fu, source, target);           // 最后将 n-1 个圆盘从 fu 移动到 target
    }
}

int main() 
{
    int n = 3; 
    hanoi(n, "A", "B", "C");
    return 0;    
}

