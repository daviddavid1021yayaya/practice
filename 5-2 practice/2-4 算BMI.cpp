#include<stdio.h>
int main(){
	float input1=0,input2=0,BMI=0 ;
	printf("please enter 身高: ");
	scanf("%f",&input1);
	printf("please enter 體重: ");
	scanf("%f",&input2);
	BMI = input2/(input1*input1) ; 
	
	printf("BMI = %f",BMI);
	
	
	
	
	
	return 0 ;
}
