#include<stdio.h>

int main()
{
    int a[] = {12, 0, 10, 9, 8, -1, 21, -6}; 
    int i, j, key, temp;  
  
    for(i = 0; i <= 7; i++)  
    {
        key = i;
        for(j = i + 1; j <= 7; j++)  
        {
            if(a[j] < a[key])  
            {
                key = j; 
            }
        }

        if(key != i)  
        {
            temp = a[i];
            a[i] = a[key];
            a[key] = temp;
        }
    printf("%d\t", a[i]);
    }

    //printf("排序后的数组是：");
    //for(i = 0; i <= 7; i++) 
    //{
        //printf("%d ", a[i]);
    //}
    //printf("\n"); 

    return 0;
}

