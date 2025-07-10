 #include<stdio.h>
 #include<math.h>
double f(double x)
 {
 	return 2*pow(x,3)-4*pow(x,2)+3*x-6;
 } 
 
 int main()
 {
 	double x0=-10,y0,x1=10,y1,x2,y2;
 	y0=f(x0);
 	y1=f(x1);

	
 	while(fabs(x0-x1)>1e-6)
 	{
 		x2=(x0+x1)/2;
 		y2=f(x2);
 	if(y0*y2>0)
 	 {
 		x0=x2;
 		y0=y2;
	 }
	 else 
	 {
	 	x1=x2; 
	 	y1=y2;
	 }
	 
	}
	printf("¸úÎª:%.2lf",x0);
	return 0;

 }
