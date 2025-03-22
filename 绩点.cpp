#include<string.h>
#include<stdio.h>
#include<math.h>
#define N 7    // 学生人数 
#define M 3    // 课程数量 

// 学生结构体 
struct student
{
	int SNo;         // 学号 
	char SName[60];  // 姓名 
	int score[M];    // 成绩 
	float point;     // 绩点 
	int mc;          // 名次 
};

// 课程结构体 
struct course
{
	int CNo;          // 课程号 
	char CName[50];   // 课程名 
	float Weight;     // 学分 
	double ave;       // 课程平均分 
	double FC;        // 课程分标准差 
	int dj[5];        // 课程成绩等级分布 
};

// 学生与课程 
struct student stu[N];   // 学生信息数组 
struct course cs[M];     // 课程信息数组 

// 函数声明 
void InputCourse();      // 从Course.txt文件导入课程数据 
void InputStudent();     // 从Student.txt文件导入学生数据
void OutputKC();         // 输出统计后的课程成绩信息到文件 
void OutputMC();         // 输出统计后的名次成绩信息到文件
void CalPoint();         // 计算所有学生的绩点； 
void CalSequence();      // 计算所有学生的名次；
void CalAverage();       // 计算各门课程平均分
void CalFC();            // 计算各门课程方差   
void CountGrade();       // 统计每门课程各分数段人数 
void Display(int sno);   // 显示指定学号对应的学生信息 


int main()
{
	int i,j;
	int m;
	int sn;
	char ctn; 
	InputCourse();     // 读入课程信息 
	InputStudent();    // 读入学生信息 
	CalPoint();        // 计算绩点 
	CalSequence();     // 计算名次 
	CalAverage();      // 计算课程平均分 
	CalFC();           // 计算课程分方差 
	CountGrade();      // 计算各课程分数段人数 
	OutputKC();        // 输出课程信息到文件 
	OutputMC();        // 输出名次信息到文件 
	
	printf("**********欢迎使用学生信息管理系统**********\n");
	
	do 
	{
		printf("\n请选择菜单项:\n");		
		printf("1  查询学生信息\n");
		printf("2  显示不及格学生名单\n");
		printf("3  显示优等生名单\n");
		printf("0  退出\n");
		fflush(stdin);  //清空输入缓冲区 
		scanf("%d",&m);	
		
		if(m==1)   //  查询学生信息 
		{
			do
			{   
			    // 查询指定学号的学生信息 
				printf("\n请输入要查询的学号:\n"); 
				fflush(stdin);
				scanf("%d",&sn);
				for(i=0;i<N;i++)      // 查找学号为sn的学生 
				{
					if(stu[i].SNo==sn)  
					{
						printf("\n");  
						Display(sn);  
						break;
					}
				}
				if(i>=N)   // 所输入的学号不存在 
					printf("学号不存在\n");	
				printf("\n是否继续查询学生信息？\n");
				printf(" Y 是\n N 否\n");
				fflush(stdin);
				scanf("%c",&ctn);     // 决定是否继续输入其他学号 
			}while(ctn=='y' || ctn=='Y');    
		}
else if(m == 2)   // 显示不及格学生名单 
{
    int i, j;
    int fail_count = 0;  // 记录不及格学生的数量
    struct fail_student {
        int index;  // 学生在 stu 数组中的索引
        float sum_fail_credit;  // 不及格学分总和
    } fail_students[N];

    printf("\n"); // 加入空行，更美观
    printf("不及格学生名单如下：\n");

    // 计算每个学生的不及格学分，并将不及格学生的索引和学分保存
    for(i = 0; i < N; i++) {
        float sum = 0;
        for(j = 0; j < M; j++) {
            if(stu[i].score[j] < 60) {  // 如果该学生某门课程不及格
                sum += cs[j].Weight;  // 加上该课程的学分
            }
        }
        if(sum > 0) {  // 如果该学生有不及格课程
            fail_students[fail_count].index = i;  // 保存该学生的索引
            fail_students[fail_count].sum_fail_credit = sum;  // 保存不及格学分总和
            fail_count++;
        }
    }

    // 使用冒泡排序按学号从小到大排序不及格学生
    for(i = 0; i < fail_count - 1; i++) {
        for(j = 0; j < fail_count - 1 - i; j++) {
            if(stu[fail_students[j].index].SNo > stu[fail_students[j + 1].index].SNo) {  // 比较学号
                // 交换索引和学分
                struct fail_student temp = fail_students[j];
                fail_students[j] = fail_students[j + 1];
                fail_students[j + 1] = temp;
            }
        }
    }

    // 输出排序后的不及格学生名单及其不及格学分总和
    for(i = 0; i < fail_count; i++) {
        int index = fail_students[i].index;  // 获取学生的索引
        printf("%d %s\n", stu[index].SNo, stu[index].SName);
        for(j = 0; j < M; j++) {
            if(stu[index].score[j] < 60) {
                printf("    %s %4.1f\n", cs[j].CName, cs[j].Weight);
            }
        }
        printf("%s 不及格学分为:%4.1f\n\n", stu[index].SName, fail_students[i].sum_fail_credit);
    }
}
		
else if(m == 3)    // 显示优等生名单 
{
    printf("\n");  // 换行
    printf("%s %s %s %s\n", "学号\t", "姓名\t", "绩点\t", "名次");

    // 先计算绩点和名次
    CalPoint();
    CalSequence();

    // 使用冒泡排序按绩点从高到低排序
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (stu[j].point < stu[j + 1].point) {
                // 交换学生
                struct student temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }

    // 重新计算排序后的名次
    for (i = 0; i < N; i++) {
        if (i > 0 && stu[i].point == stu[i - 1].point) {
            stu[i].mc = stu[i - 1].mc;  // 如果绩点相同，名次相同
        } else {
            stu[i].mc = i + 1;  // 否则名次为当前位置+1
        }
    }

    // 统计优秀学生的数量
    int excellent_count = 0;
    for (i = 0; i < N; i++) {
        if (stu[i].point >= 4.0 || stu[i].mc <= 3) {  // 绩点>=4.0 或 名次<=3
            excellent_count++;
            printf("%d\t%5.60s\t%4.1f\t%3d\n", stu[i].SNo, stu[i].SName, stu[i].point, stu[i].mc);
        }
    }

    // 计算并输出班级优秀率
    float excellent_rate = ((float)excellent_count / N) * 100;  // 计算优秀学生比例
    printf("\n此班优秀率为: %.2f%%\n", excellent_rate);  // 输出优秀率，保留两位小数
}




	}while(m!=0);	 
	
	printf("**********谢谢使用**********\n");
	return 0;
}

// 从Course.txt文件导入课程数据 
void InputCourse()
{
	FILE *fp;
	fp=fopen("data\\Course.txt","r");  
	int i=0;
	int cno;      // 临时存放课程号 
	char cn[30];  // 临时存放课程名 
	float wt;     // 临时存放学分 
	char s[200];   
	fgets(s,200,fp);
	while(!feof(fp))	
	{
		fscanf(fp,"%d %s %f",&cno,cn,&wt);	
		cs[i].CNo=cno;
		strcpy(cs[i].CName,cn);
		cs[i].Weight=wt;
		i++;			
	}
	fclose(fp);	
}

// 从Student.txt文件导入课程数据
void InputStudent()
{
	FILE *fp;
	fp=fopen("data\\Student.txt","r");  
	int i=0;
	int sno;    //临时存放学号 
	char name[30];  //  临时存放学生名 
	int sc[M];     //  临时存放学生成绩，本函数假设M=3 
	char s[200];   
	fgets(s,200,fp);
	while(!feof(fp))	
	{
		fscanf(fp,"%d %s %d %d %d",&sno,name,&sc[0],&sc[1],&sc[2]);	
		stu[i].SNo=sno;
		strcpy(stu[i].SName,name);
		stu[i].score[0]=sc[0];
		stu[i].score[1]=sc[1];
		stu[i].score[2]=sc[2];
		i++;			
	}
	fclose(fp);	
}

// 把课程信息输出到文件,例如：KC环境18级.txt 
void OutputKC()
{
    int j;
    FILE *fp;
    fp = fopen("data\\KC环境18级.txt", "w");  
    // 格式化输出表头，保证对齐
    fprintf(fp, "%-6s %-20s %-8s %-10s %-6s %-6s %-6s %-6s %-6s\n", "编号", "课程名称", "学分", "标准差", "优秀", "良好", "中等", "及格", "不及格");

    for (j = 0; j < M; j++)
    {
        // 格式化输出课程信息，宽度保证对齐
        fprintf(fp, "%-6d %-20s %-8.1f %-10.3lf %-6d %-6d %-6d %-6d %-6d\n", 
            cs[j].CNo, cs[j].CName, cs[j].Weight, cs[j].FC, 
            cs[j].dj[0], cs[j].dj[1], cs[j].dj[2], cs[j].dj[3], cs[j].dj[4]);
    }

    fclose(fp);
}

 
// 把课程信息输出到文件, 例如：MC环境1班.txt 
void OutputMC() {
    int i, j;

    // 使用冒泡排序按绩点从高到低排序
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (stu[j].point < stu[j + 1].point) {
                // 交换学生
                struct student temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }

    // 重新计算排序后的名次
    for (i = 0; i < N; i++) {
        if (i > 0 && stu[i].point == stu[i - 1].point) {
            stu[i].mc = stu[i - 1].mc;  // 如果绩点相同，名次相同
        } else {
            stu[i].mc = i + 1;  // 否则名次为当前位置+1
        }
    }

    // 输出学生信息到文件
    FILE *fp;
    fp = fopen("data\\MC环境1班.txt", "w");  
    // 使用固定宽度的格式化输出确保列对齐
    fprintf(fp, "%-10s %-15s", "学号", "姓名");  // 学号和姓名的宽度可以根据实际情况调整
    for (i = 0; i < M; i++) {
        fprintf(fp, "%-10s", cs[i].CName); // 设置课程名列宽
    }
    fprintf(fp, "%-9s %-9s\n", "绩点", "名次");  // 设置绩点和名次列宽

    // 输出排序后的学生信息
    for (j = 0; j < N; j++) {
        // 输出学号、姓名，确保宽度一致
        fprintf(fp, "%-10d %-15s", stu[j].SNo, stu[j].SName); 
        // 输出每门课程成绩
        for (i = 0; i < M; i++) {
            fprintf(fp, "%-10d", stu[j].score[i]); 
        }
        // 输出绩点和名次，确保宽度一致
        fprintf(fp, "%1.1f %6d\n", stu[j].point, stu[j].mc); 
    }

    fclose(fp); 
}


 

//   计算所有学生的绩点；
void CalPoint() {
    for (int i = 0; i < N; i++) {
        float weighted_total_point = 0;
        float total_weight = 0;
        for (int j = 0; j < M; j++) {
            float course_point;
            int score = stu[i].score[j];
            if (score < 60) {
                course_point = 0; // 60分以下
            } else if (score < 70) {
                course_point = 1 + (score - 60) * 0.1f; // 60-69
            } else if (score < 80) {
                course_point = 2 + (score - 70) * 0.1f; // 70-79
            } else if (score < 90) {
                course_point = 3 + (score - 80) * 0.1f; // 80-89
            } else if (score < 100) {
                course_point = 4 + (score - 90) * 0.1f; // 90-99
            } else {
                course_point = 5; // 100
            }
            weighted_total_point += course_point * cs[j].Weight;
            total_weight += cs[j].Weight;
        }
        stu[i].point = weighted_total_point / total_weight;
        // 确保绩点保留一位小数
        stu[i].point = roundf(stu[i].point * 10) / 10;
    }
}


// 计算所有学生的名次:
void CalSequence() {
    // 使用冒泡排序按绩点从高到低排序
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            // 如果当前学生的绩点小于下一个学生的绩点，则交换两者
            if (stu[j].point < stu[j + 1].point) {
                struct student temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }

    // 根据排序结果设置名次
    for (int i = 0; i < N; i++) {
        stu[i].mc = i + 1; // 先假设每个学生的名次是唯一的
        for (int j = 0; j < i; j++) { // 检查之前的学生成绩是否相同
            if (stu[j].point == stu[i].point) {
                stu[i].mc = stu[j].mc; // 如果成绩相同，则名次相同
                break;
            }
        }
    }
}




// 计算各门课程平均成绩 
void CalAverage() {
    for (int i = 0; i < M; i++) {
        double total_score = 0;
        for (int j = 0; j < N; j++) {
            total_score += stu[j].score[i];
        }
        cs[i].ave = total_score / N;
    }
}


// 计算各门课程方差
void CalFC() {
    for (int i = 0; i < M; i++) {
        double total_variance = 0;
        for (int j = 0; j < N; j++) {
            total_variance += pow(stu[j].score[i] - cs[i].ave, 2);
        }
        cs[i].FC = sqrt(total_variance / N);
    }
}

// 统计每门课程各分数段人数 
void CountGrade() {
    int arr[M][5] = { 0 }; // 初始化数组，统计每个课程的成绩分段
    for (int i = 0; i < M; i++) { // 遍历每个课程
        for (int j = 0; j < N; j++) { // 遍历每个学生
            int score = stu[j].score[i];
            if (score >= 90) {
                arr[i][0]++; // 优秀 (90分以上)
            } else if (score >= 80) {
                arr[i][1]++; // 良好 (80-89)
            } else if (score >= 70) {
                arr[i][2]++; // 中等 (70-79)
            } else if (score >= 60) {
                arr[i][3]++; // 及格 (60-69)
            } else {
                arr[i][4]++; // 不及格 (60分以下)
            }
        }

        // 将统计结果赋值给 cs[i].dj[m]
        for (int m = 0; m < 5; m++) {
            cs[i].dj[m] = arr[i][m];
        }
    }
}



// 显示指定学号对应的学生信息 
void Display(int sno) {
    for (int i = 0; i < N; i++) {
        if (stu[i].SNo == sno) {
            printf("学号: %d\n", stu[i].SNo);
            printf("姓名: %s\n", stu[i].SName);
            printf("各科成绩: \n");
            for (int j = 0; j < M; j++) {
                printf("    %s: %d\n", cs[j].CName, stu[i].score[j]);
            }
            printf("绩点: %.1f\n", stu[i].point);
            printf("名次: %d\n", stu[i].mc); 
            return;
        }
    }
    printf("学号 %d 不存在\n", sno);
}






