#include<stdio.h> 
int main(){
	int month = 0, day = 0, sum = 0 ;
	printf("please enter month : ");
	scanf("%d",&month);
	printf("please enter day : ");
	scanf("%d",&day);
	
	switch(month){
		case 1:sum = 0 ;break;
		case 2:sum = 31 ;break;
		case 3:sum = 31+28 ;break;
		case 4:sum = 31+28+31 ;break;
		case 5:sum = 31+28+31+30 ;break;
		case 6:sum = 31+28+31+30+31 ;break;
		case 7:sum = 31+28+31+30+31+30 ;break;
		case 8:sum = 31+28+31+30+31+30+31 ;break;
		case 9:sum = 31+28+31+30+31+30+31+31 ;break;
		case 10:sum = 31+28+31+30+31+30+31+31+30 ;break;
		case 11:sum = 31+28+31+30+31+30+31+31+30+31 ;break;
		case 12:sum = 31+28+31+30+31+30+31+31+30+31+30 ;break;
		default:printf("wrong ");
	}
	sum += day ;
	printf("%d",sum);
	
	
	
	
	
	return 0;
}
