#include<stdio.h>
int main(){
	int input = 0;
	scanf("%d",&input);
	if(input<=100)
		printf("%d", input*2.2);
	if(input>100&&input<300)
		printf("%d", 220+(input-100)*3.3 );
	if(input>300)
		printf("%d", 220+660+(input-300)*4.4);
	
	
	
	
	return 0 ;
} 
