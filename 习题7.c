#include <stdio.h>
// int main()
// {
//     int x,y;
//     printf("enter x\n");
//     scanf("%d",&x);
//     y=-1;
//     if(x!=0)
//         if(x>0)
//           y=1;
//     else 
//         y=0;
//     printf("x=%d,y=%d",x,y);
//     return 0;
// }
/*结果是 x=-5,y=0;
        x=5,y=1;
        x=0,y=-1;
*/


int main()
{
    int x,y;
    printf("enter x\n");
    scanf("%d",&x);
    y=0;

    if(x>=0)
        if(x>0)
          y=1;
    else 
        y=-1;
    printf("x=%d,y=%d\n",x,y);
    return 0;
}

/*结果是 x=-5,y=0;
        x=5,y=1;
        x=0,y=-1;
*/

