#include <stdio.h>
#include <ctype.h>

// 统计字符串长度
int my_strlen(char* str) {
    int len = 0;
    while (*str++) len++;
    return len;
}

// 字符串复制
void my_strcpy(char* dest, char* src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // 确保字符串结束符
}

// 字符串连接
void my_strcat(char* dest, char* src) {
    // 移动到dest的末尾
    while (*dest) dest++;
    // 复制src内容
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// 字符串比较
int my_strcmp(char* s1, char* s2) {
    while (*s1 && *s2 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *s1 - *s2;  // 返回ASCII差值
}

int main() {
    char str1[20] = "hello";
    char str2[] = " world";
    char dest[50];
    
    // 测试自定义函数
    printf("str1长度: %d\n", my_strlen(str1));
    
    my_strcpy(dest, str1);
    printf("复制后: %s\n", dest);
    
    my_strcat(dest, str2);
    printf("连接后: %s\n", dest);
    
    printf("比较结果: %d\n", my_strcmp("apple", "banana"));
    return 0;
}