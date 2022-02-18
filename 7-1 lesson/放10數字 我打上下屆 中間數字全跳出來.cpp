#include<stdio.h>
int main(){
	int num[10];
	for(int i = 0;i <10;i++){
		scanf("%d",&num[i]);
	}
	
	int l=0,r=0;
	while(1){                                 //WHILE 最後再打 
		printf("L R :");                      //通常要下個IF的狀況 讓他BREAK 
		scanf("%d %d",&l,&r);
		if(l == 0 && r == 0){
			break;
		}
		printf("ANS = ");
		for(int i = 0;i < 10;i++){             //思考 如果要印某個範圍的資料 
			if(num[i] >= l && num[i] <= r){    //p打法要先回圈全印 再現IF判斷式  
				printf("%d",num[i]);
			}	
		}
	
		printf("\n");
	}
	
	
	
	
	return 0 ;
}
