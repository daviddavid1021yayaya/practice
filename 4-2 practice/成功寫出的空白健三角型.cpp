#include<stdio.h>
int main(){
	int input = 0;
	scanf("%d",&input);
	for(int i = 0;i < input;i ++){
			printf("\n");
		for(int j = input ;j > i;j --){  //我原本想法是input - 1開始 之所以答案是j = input是因為是從0開始所以要自動加一 
			printf(" ");
		}
		for(int k = 0;k <= i;k ++){
			printf("*");
		}
	
	}
	
	
	
	return 0;
}
