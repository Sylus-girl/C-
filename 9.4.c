//有n个学生的信息（包括学号、姓名、成绩），要求按照成绩的高低顺序输出各学生的信息
#include<stdio.h>
struct Student
{
    int num;
    char name[20];
    float score;
};

int main()
{
    struct Student stu[5]={{10011,"Zhang",78},{10012,"Wang",98.5},{10013,"Li",86},{10014,"Ling",73.5},{10015,"Sun",100}};
    struct Student temp;
    const int n=5;
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(stu[k].score<stu[j].score)
            {
                k=j;
            }
        }
        temp=stu[k];
        stu[k]=stu[i];
        stu[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%6d %8s %6.2f\n",stu[i].num,stu[i].name,stu[i].score);
    }
    return 0;
}