#include<stdio.h>
int main(){
	int i ,num[5];
	for(int i = 0;i < 5;i++){
		printf("%d : ",i+1);
		scanf("%d",&num[i]);	
	}
	
	while(1){
		printf("Q: ");
		scanf("%d",&i);
		if(i==0){
			break;
		}
		printf("%d\n",num[i-1]);
	}

	return 0 ;
}
