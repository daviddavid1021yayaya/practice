#include<stdio.h>
int main(){
	int input = 0;
	scanf("%d",&input);
	for(int i = 0;i < input;i ++){
		for(int j = input - 1;j < i;j ++){
			for(int k = 0;k <= i;k++){
				printf("*");
			}
			printf(" ");
			
		}
		
		
		
		
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
