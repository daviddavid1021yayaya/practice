#include<stdio.h>
int n = 0 ;
int f(int n){
	if(n==1||n==2){
		return 1;
	}else{
		return f(n-1)+f(n-2);
	}
}

int main(){
	int num = 0 ;
	scanf("%d",&n);
	
//	for(int i = 1;i<n;i++){
//		printf("n = %d\n",f(n));
//	}
	
	num = f(n);
	printf("%d",num);
	
	return 0 ;
}
