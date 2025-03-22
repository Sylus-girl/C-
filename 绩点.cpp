#include<string.h>
#include<stdio.h>
#include<math.h>
#define N 7    // ѧ������ 
#define M 3    // �γ����� 

// ѧ���ṹ�� 
struct student
{
	int SNo;         // ѧ�� 
	char SName[60];  // ���� 
	int score[M];    // �ɼ� 
	float point;     // ���� 
	int mc;          // ���� 
};

// �γ̽ṹ�� 
struct course
{
	int CNo;          // �γ̺� 
	char CName[50];   // �γ��� 
	float Weight;     // ѧ�� 
	double ave;       // �γ�ƽ���� 
	double FC;        // �γ̷ֱ�׼�� 
	int dj[5];        // �γ̳ɼ��ȼ��ֲ� 
};

// ѧ����γ� 
struct student stu[N];   // ѧ����Ϣ���� 
struct course cs[M];     // �γ���Ϣ���� 

// �������� 
void InputCourse();      // ��Course.txt�ļ�����γ����� 
void InputStudent();     // ��Student.txt�ļ�����ѧ������
void OutputKC();         // ���ͳ�ƺ�Ŀγ̳ɼ���Ϣ���ļ� 
void OutputMC();         // ���ͳ�ƺ�����γɼ���Ϣ���ļ�
void CalPoint();         // ��������ѧ���ļ��㣻 
void CalSequence();      // ��������ѧ�������Σ�
void CalAverage();       // ������ſγ�ƽ����
void CalFC();            // ������ſγ̷���   
void CountGrade();       // ͳ��ÿ�ſγ̸����������� 
void Display(int sno);   // ��ʾָ��ѧ�Ŷ�Ӧ��ѧ����Ϣ 


int main()
{
	int i,j;
	int m;
	int sn;
	char ctn; 
	InputCourse();     // ����γ���Ϣ 
	InputStudent();    // ����ѧ����Ϣ 
	CalPoint();        // ���㼨�� 
	CalSequence();     // �������� 
	CalAverage();      // ����γ�ƽ���� 
	CalFC();           // ����γ̷ַ��� 
	CountGrade();      // ������γ̷��������� 
	OutputKC();        // ����γ���Ϣ���ļ� 
	OutputMC();        // ���������Ϣ���ļ� 
	
	printf("**********��ӭʹ��ѧ����Ϣ����ϵͳ**********\n");
	
	do 
	{
		printf("\n��ѡ��˵���:\n");		
		printf("1  ��ѯѧ����Ϣ\n");
		printf("2  ��ʾ������ѧ������\n");
		printf("3  ��ʾ�ŵ�������\n");
		printf("0  �˳�\n");
		fflush(stdin);  //������뻺���� 
		scanf("%d",&m);	
		
		if(m==1)   //  ��ѯѧ����Ϣ 
		{
			do
			{   
			    // ��ѯָ��ѧ�ŵ�ѧ����Ϣ 
				printf("\n������Ҫ��ѯ��ѧ��:\n"); 
				fflush(stdin);
				scanf("%d",&sn);
				for(i=0;i<N;i++)      // ����ѧ��Ϊsn��ѧ�� 
				{
					if(stu[i].SNo==sn)  
					{
						printf("\n");  
						Display(sn);  
						break;
					}
				}
				if(i>=N)   // �������ѧ�Ų����� 
					printf("ѧ�Ų�����\n");	
				printf("\n�Ƿ������ѯѧ����Ϣ��\n");
				printf(" Y ��\n N ��\n");
				fflush(stdin);
				scanf("%c",&ctn);     // �����Ƿ������������ѧ�� 
			}while(ctn=='y' || ctn=='Y');    
		}
else if(m == 2)   // ��ʾ������ѧ������ 
{
    int i, j;
    int fail_count = 0;  // ��¼������ѧ��������
    struct fail_student {
        int index;  // ѧ���� stu �����е�����
        float sum_fail_credit;  // ������ѧ���ܺ�
    } fail_students[N];

    printf("\n"); // ������У�������
    printf("������ѧ���������£�\n");

    // ����ÿ��ѧ���Ĳ�����ѧ�֣�����������ѧ����������ѧ�ֱ���
    for(i = 0; i < N; i++) {
        float sum = 0;
        for(j = 0; j < M; j++) {
            if(stu[i].score[j] < 60) {  // �����ѧ��ĳ�ſγ̲�����
                sum += cs[j].Weight;  // ���ϸÿγ̵�ѧ��
            }
        }
        if(sum > 0) {  // �����ѧ���в�����γ�
            fail_students[fail_count].index = i;  // �����ѧ��������
            fail_students[fail_count].sum_fail_credit = sum;  // ���治����ѧ���ܺ�
            fail_count++;
        }
    }

    // ʹ��ð������ѧ�Ŵ�С�������򲻼���ѧ��
    for(i = 0; i < fail_count - 1; i++) {
        for(j = 0; j < fail_count - 1 - i; j++) {
            if(stu[fail_students[j].index].SNo > stu[fail_students[j + 1].index].SNo) {  // �Ƚ�ѧ��
                // ����������ѧ��
                struct fail_student temp = fail_students[j];
                fail_students[j] = fail_students[j + 1];
                fail_students[j + 1] = temp;
            }
        }
    }

    // ��������Ĳ�����ѧ���������䲻����ѧ���ܺ�
    for(i = 0; i < fail_count; i++) {
        int index = fail_students[i].index;  // ��ȡѧ��������
        printf("%d %s\n", stu[index].SNo, stu[index].SName);
        for(j = 0; j < M; j++) {
            if(stu[index].score[j] < 60) {
                printf("    %s %4.1f\n", cs[j].CName, cs[j].Weight);
            }
        }
        printf("%s ������ѧ��Ϊ:%4.1f\n\n", stu[index].SName, fail_students[i].sum_fail_credit);
    }
}
		
else if(m == 3)    // ��ʾ�ŵ������� 
{
    printf("\n");  // ����
    printf("%s %s %s %s\n", "ѧ��\t", "����\t", "����\t", "����");

    // �ȼ��㼨�������
    CalPoint();
    CalSequence();

    // ʹ��ð�����򰴼���Ӹߵ�������
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (stu[j].point < stu[j + 1].point) {
                // ����ѧ��
                struct student temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }

    // ���¼�������������
    for (i = 0; i < N; i++) {
        if (i > 0 && stu[i].point == stu[i - 1].point) {
            stu[i].mc = stu[i - 1].mc;  // ���������ͬ��������ͬ
        } else {
            stu[i].mc = i + 1;  // ��������Ϊ��ǰλ��+1
        }
    }

    // ͳ������ѧ��������
    int excellent_count = 0;
    for (i = 0; i < N; i++) {
        if (stu[i].point >= 4.0 || stu[i].mc <= 3) {  // ����>=4.0 �� ����<=3
            excellent_count++;
            printf("%d\t%5.60s\t%4.1f\t%3d\n", stu[i].SNo, stu[i].SName, stu[i].point, stu[i].mc);
        }
    }

    // ���㲢����༶������
    float excellent_rate = ((float)excellent_count / N) * 100;  // ��������ѧ������
    printf("\n�˰�������Ϊ: %.2f%%\n", excellent_rate);  // ��������ʣ�������λС��
}




	}while(m!=0);	 
	
	printf("**********ллʹ��**********\n");
	return 0;
}

// ��Course.txt�ļ�����γ����� 
void InputCourse()
{
	FILE *fp;
	fp=fopen("data\\Course.txt","r");  
	int i=0;
	int cno;      // ��ʱ��ſγ̺� 
	char cn[30];  // ��ʱ��ſγ��� 
	float wt;     // ��ʱ���ѧ�� 
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

// ��Student.txt�ļ�����γ�����
void InputStudent()
{
	FILE *fp;
	fp=fopen("data\\Student.txt","r");  
	int i=0;
	int sno;    //��ʱ���ѧ�� 
	char name[30];  //  ��ʱ���ѧ���� 
	int sc[M];     //  ��ʱ���ѧ���ɼ�������������M=3 
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

// �ѿγ���Ϣ������ļ�,���磺KC����18��.txt 
void OutputKC()
{
    int j;
    FILE *fp;
    fp = fopen("data\\KC����18��.txt", "w");  
    // ��ʽ�������ͷ����֤����
    fprintf(fp, "%-6s %-20s %-8s %-10s %-6s %-6s %-6s %-6s %-6s\n", "���", "�γ�����", "ѧ��", "��׼��", "����", "����", "�е�", "����", "������");

    for (j = 0; j < M; j++)
    {
        // ��ʽ������γ���Ϣ����ȱ�֤����
        fprintf(fp, "%-6d %-20s %-8.1f %-10.3lf %-6d %-6d %-6d %-6d %-6d\n", 
            cs[j].CNo, cs[j].CName, cs[j].Weight, cs[j].FC, 
            cs[j].dj[0], cs[j].dj[1], cs[j].dj[2], cs[j].dj[3], cs[j].dj[4]);
    }

    fclose(fp);
}

 
// �ѿγ���Ϣ������ļ�, ���磺MC����1��.txt 
void OutputMC() {
    int i, j;

    // ʹ��ð�����򰴼���Ӹߵ�������
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (stu[j].point < stu[j + 1].point) {
                // ����ѧ��
                struct student temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }

    // ���¼�������������
    for (i = 0; i < N; i++) {
        if (i > 0 && stu[i].point == stu[i - 1].point) {
            stu[i].mc = stu[i - 1].mc;  // ���������ͬ��������ͬ
        } else {
            stu[i].mc = i + 1;  // ��������Ϊ��ǰλ��+1
        }
    }

    // ���ѧ����Ϣ���ļ�
    FILE *fp;
    fp = fopen("data\\MC����1��.txt", "w");  
    // ʹ�ù̶���ȵĸ�ʽ�����ȷ���ж���
    fprintf(fp, "%-10s %-15s", "ѧ��", "����");  // ѧ�ź������Ŀ�ȿ��Ը���ʵ���������
    for (i = 0; i < M; i++) {
        fprintf(fp, "%-10s", cs[i].CName); // ���ÿγ����п�
    }
    fprintf(fp, "%-9s %-9s\n", "����", "����");  // ���ü���������п�

    // ���������ѧ����Ϣ
    for (j = 0; j < N; j++) {
        // ���ѧ�š�������ȷ�����һ��
        fprintf(fp, "%-10d %-15s", stu[j].SNo, stu[j].SName); 
        // ���ÿ�ſγ̳ɼ�
        for (i = 0; i < M; i++) {
            fprintf(fp, "%-10d", stu[j].score[i]); 
        }
        // �����������Σ�ȷ�����һ��
        fprintf(fp, "%1.1f %6d\n", stu[j].point, stu[j].mc); 
    }

    fclose(fp); 
}


 

//   ��������ѧ���ļ��㣻
void CalPoint() {
    for (int i = 0; i < N; i++) {
        float weighted_total_point = 0;
        float total_weight = 0;
        for (int j = 0; j < M; j++) {
            float course_point;
            int score = stu[i].score[j];
            if (score < 60) {
                course_point = 0; // 60������
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
        // ȷ�����㱣��һλС��
        stu[i].point = roundf(stu[i].point * 10) / 10;
    }
}


// ��������ѧ��������:
void CalSequence() {
    // ʹ��ð�����򰴼���Ӹߵ�������
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            // �����ǰѧ���ļ���С����һ��ѧ���ļ��㣬�򽻻�����
            if (stu[j].point < stu[j + 1].point) {
                struct student temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }

    // ������������������
    for (int i = 0; i < N; i++) {
        stu[i].mc = i + 1; // �ȼ���ÿ��ѧ����������Ψһ��
        for (int j = 0; j < i; j++) { // ���֮ǰ��ѧ���ɼ��Ƿ���ͬ
            if (stu[j].point == stu[i].point) {
                stu[i].mc = stu[j].mc; // ����ɼ���ͬ����������ͬ
                break;
            }
        }
    }
}




// ������ſγ�ƽ���ɼ� 
void CalAverage() {
    for (int i = 0; i < M; i++) {
        double total_score = 0;
        for (int j = 0; j < N; j++) {
            total_score += stu[j].score[i];
        }
        cs[i].ave = total_score / N;
    }
}


// ������ſγ̷���
void CalFC() {
    for (int i = 0; i < M; i++) {
        double total_variance = 0;
        for (int j = 0; j < N; j++) {
            total_variance += pow(stu[j].score[i] - cs[i].ave, 2);
        }
        cs[i].FC = sqrt(total_variance / N);
    }
}

// ͳ��ÿ�ſγ̸����������� 
void CountGrade() {
    int arr[M][5] = { 0 }; // ��ʼ�����飬ͳ��ÿ���γ̵ĳɼ��ֶ�
    for (int i = 0; i < M; i++) { // ����ÿ���γ�
        for (int j = 0; j < N; j++) { // ����ÿ��ѧ��
            int score = stu[j].score[i];
            if (score >= 90) {
                arr[i][0]++; // ���� (90������)
            } else if (score >= 80) {
                arr[i][1]++; // ���� (80-89)
            } else if (score >= 70) {
                arr[i][2]++; // �е� (70-79)
            } else if (score >= 60) {
                arr[i][3]++; // ���� (60-69)
            } else {
                arr[i][4]++; // ������ (60������)
            }
        }

        // ��ͳ�ƽ����ֵ�� cs[i].dj[m]
        for (int m = 0; m < 5; m++) {
            cs[i].dj[m] = arr[i][m];
        }
    }
}



// ��ʾָ��ѧ�Ŷ�Ӧ��ѧ����Ϣ 
void Display(int sno) {
    for (int i = 0; i < N; i++) {
        if (stu[i].SNo == sno) {
            printf("ѧ��: %d\n", stu[i].SNo);
            printf("����: %s\n", stu[i].SName);
            printf("���Ƴɼ�: \n");
            for (int j = 0; j < M; j++) {
                printf("    %s: %d\n", cs[j].CName, stu[i].score[j]);
            }
            printf("����: %.1f\n", stu[i].point);
            printf("����: %d\n", stu[i].mc); 
            return;
        }
    }
    printf("ѧ�� %d ������\n", sno);
}






