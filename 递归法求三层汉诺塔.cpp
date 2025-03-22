#include <stdio.h>

void hanoi(int n, char *source, char *fu, char *target) {
    if (n == 1) 
	{
        printf("��Բ��1�� %s �ƶ��� %s\n", source, target); 
    } 
	else 
	{  
        hanoi(n - 1, source, target, fu);         // �Ƚ� n-1 ��Բ�̴� source �ƶ��� fu
        printf("��Բ��%d�� %s �ƶ��� %s\n", n, source, target);         // ��ӡ�ƶ��� n ��Բ��
        hanoi(n - 1, fu, source, target);           // ��� n-1 ��Բ�̴� fu �ƶ��� target
    }
}

int main() 
{
    int n = 3; 
    hanoi(n, "A", "B", "C");
    return 0;    
}

