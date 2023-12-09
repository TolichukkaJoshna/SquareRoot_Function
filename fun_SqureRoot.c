#include<stdio.h>
#include<math.h>

double calculateSqureRoot(double num){
    return sqrt(num);
}

int main()
{
    double number,result;
    
    printf("enter a number..:");
    scanf("%lf",&number);
    
    result=calculateSqureRoot(number);
    
    printf("the squre root of %.2lf is %.2lf\n",number,result);
    
	return 0;
	
}
