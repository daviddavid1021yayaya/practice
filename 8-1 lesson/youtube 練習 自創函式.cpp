#include<stdio.h>

int power(int input,int n){
	int r=1;
	for(int i = 0;i < n;i++){
		r = r * input;	 
	}
	return r;
}



int main(){
	int input = 0,r = 1,n = 0;
	scanf("%d %d",&input,&n);

	printf("%d",power(input,n));

	return 0 ;
}
