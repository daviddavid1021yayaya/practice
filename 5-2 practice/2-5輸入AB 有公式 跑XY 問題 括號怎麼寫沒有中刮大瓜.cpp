#include<stdio.h>
int main(){
	float a=0,b=0,x=0,y=0;
	printf("please enter a = ");
	scanf("%f",&a);
	printf("please enter b = ");
	scanf("%f",&b);
	x = (a+b*b)/((a-3*b)*(2*a+b));   //中括號怎打 數字部隊 
	y = (a*a*a+b*b)/(3*b*(a-5*b));  //中括號就是兩個括號 
	printf("x = %.f\n",x);
	printf("y = %.2f",y);
	
	
	
	
	
	
	
	
	return 0 ;
}
