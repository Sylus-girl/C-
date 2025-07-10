//运输公司对用户计算运输费用。路程越远，运费越低，标准如下：
/*
    s<250 无折扣
    250<=s<500 2%折扣
    500<=s<1000 5%折扣
    1000<=s<2000 8%折扣
    2000<=s<3000 10%折扣
    3000<=s 15%折扣
*/

#include<stdio.h>

//设每吨每千米货物的基本运费为p，货物重为w,距离为s,折扣为d,则总运费为f;
int main()
{
    int s;
    float p,w,d,f;
    printf("please enter price,weight,distance:");
    scanf("%f,%f,%d",&p,&w,&s);

    //易观察到折扣的变化点都是250的倍数
    int c;
    if(s>=3000)  c=12;
    else c=s/250;
    
    switch(c)
    {
        case 0:
            d=0;
        break;

        case 1:
            d=2.0/100;
        break;

        case 2:
        case 3:
            d=5/100;
        break;

        case 4:
        case 5:
        case 6:
        case 7:
            d=8.0/100;
        break;

        case 8:
        case 9:
        case 10:
        case 11:
            d=10.0/100;
        break;

        case 12:
            d=15.0/100;
        break;
    }
    f=p*w*s*(1-d);
    printf("freight=%10.2f\n",f);
    return 0;
}







