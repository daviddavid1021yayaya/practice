#include<stdio.h>
int main(){
	float high=100,meter=100;
	for(int i = 0;i < 10;i++){
		high = high+2*(high/2);
		meter = meter/2;
		
	}
	
	printf("%f\n%f",high,meter);
	
	
	
	
	
	
	
	return 0 ;
} 
