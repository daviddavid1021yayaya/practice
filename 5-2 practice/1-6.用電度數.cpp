#include<stdio.h>
int main(){
	int input = 0,a = 0;
	scanf("%d",&input);
		if(input<100)
		a = 2.2*input;
		if(input>=100&&input<=300)
		a = 220+ (input-100)*3.3;
		if(input>300)
		a = 660+220+(input-300)*4.4;
		
		printf("%d",a);
	
	
	
	
	
	
	
	return 0;
}
