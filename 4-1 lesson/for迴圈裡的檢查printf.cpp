#include<stdio.h>
int main(){
	int input = 0;
	printf("please enter i = ");
	scanf("%d",&input);
	int i,sum;
	for (i=1,sum=0;i<=input;i+=2) { 
    sum += i; 
    printf("i=%d\n", i); 
    printf("sum=%d\n",sum); 
    printf("\n"); 
}
	
	
	
	
	
	
	
	
	return 0 ;
}
