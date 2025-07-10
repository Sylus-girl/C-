//求多项式（1-1/2+1/3-1/4+...+1/99-1/100）

#include<stdio.h>

int main()
{
    int sign=1;
    double deno=2.0,sum=1.0,term;
    while(deno<=100)
    {
        sign=-sign;
        term=sign/deno;
        sum+=term;
        deno++;
    }
    printf("%lf\n",sum);
    return 0;
}
/*
int main()
{
    int sign=-1;
    double deno=1.0,sum=0.0,term;
    while(deno<=100)
    {
        sign=-sign;
        term=sign/deno;
        sum+=term;
        deno++;
    }
    printf("%lf\n",sum);
    return 0;
}
*/



/*
int main()
{
    double sum=0;
    int sign=-1;
    double shu;
    for(int m=1;m<=100;m++)
    {
        if(m%2==0)
        {
            shu=(1.0/m)*sign;
        }
        else shu=(1.0/m);

        sum+=shu;
    }
    printf("%f\n",sum);
    return 0;
}
*/
