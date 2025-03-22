#include<stdio.h>
#include<math.h>
double he(int n)
{
	if (n==1)
		return 1.0;
	else
		return he(n-1)+pow(-1, n - 1) / (2 * n - 1);
	
}

int main()
{	
	printf("%.4f\n",he(7));		
	return 0;			
}



		
		
		
		
		
		
		
		
		
