//用公式π/4~=1-1/3+1/5-1/7+...  求π的近似值，直到发现某一项的绝对值小于10的-6次方为止（该项不累加）

#include<stdio.h>
#include<math.h>

int main()
{
    int sign=-1;
    double pi=0.0;
    double term=1.0;
    while(fabs(term)>=1e-6)
    {
        pi+=term
        double i=1.0;
        sign=-sign;
        term=1.0/i;
      *sign;
        i+=2;
    }
    pi=sum*4;
    printf("pi=%10.8f\n",pi);
    
    return 0;
}


