#include<stdio.h>
int main(){
	float i = 0, o = 0;
	scanf("%f",&i);
	if(i>300)
		o = 100*2.2+(300-100)*3.3+(i-300)*4.4;
	if(i>100&&i<300)
		o = 100*2.2+(i-100)*3.3;
	if(i<100)
		o = i*2.2;
		
	printf("%.1f",o);	
	
	
	
	return 0 ;
}
