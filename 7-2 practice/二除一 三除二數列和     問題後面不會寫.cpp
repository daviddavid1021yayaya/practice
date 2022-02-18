#include<stdio.h>
int main(){
	int x=2,y=1,z=0,num=20;
	for(int i = 0;i < num;i++){
		z = z+x/y;
		x=x+y;
		//卡關 
		
	}
	
	printf("數列的前 20 項之和 = %d",z);
	
	
	
	
	
	
	return 0 ;
} 
