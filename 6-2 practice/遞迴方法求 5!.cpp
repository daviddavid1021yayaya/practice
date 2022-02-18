#include<stdio.h> 
int sum = 1;
int kk(int n){
	if(n==1){
	return 1 ;
	}else{
	sum = kk(n-1)*n	; //¤£¤ÓÃ­ 
	}
	
	
}	
	
int main(){
	int n =0;
	scanf("%d",&n);
	printf("%d",kk(n));
	
	
	
	
	return 0 ;
}
