#include<stdio.h>
int main(){
	int input = 0;
	scanf("%d",&input);
	for(int i = 0;i < input;i ++){
		for(int u = 0;u < i;u ++ ){
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
