#include <stdio.h>
#include <ctype.h>

// ͳ���ַ�������
int my_strlen(char* str) {
    int len = 0;
    while (*str++) len++;
    return len;
}

// �ַ�������
void my_strcpy(char* dest, char* src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // ȷ���ַ���������
}

// �ַ�������
void my_strcat(char* dest, char* src) {
    // �ƶ���dest��ĩβ
    while (*dest) dest++;
    // ����src����
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// �ַ����Ƚ�
int my_strcmp(char* s1, char* s2) {
    while (*s1 && *s2 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *s1 - *s2;  // ����ASCII��ֵ
}

int main() {
    char str1[20] = "hello";
    char str2[] = " world";
    char dest[50];
    
    // �����Զ��庯��
    printf("str1����: %d\n", my_strlen(str1));
    
    my_strcpy(dest, str1);
    printf("���ƺ�: %s\n", dest);
    
    my_strcat(dest, str2);
    printf("���Ӻ�: %s\n", dest);
    
    printf("�ȽϽ��: %d\n", my_strcmp("apple", "banana"));
    return 0;
}