#include<stdio.h>
int power(int input,int n){
	int q=1;
	for(int i = 0;i < n;i++ ){
		q = q * input;
	}
	return q;
}



int main(){
	int input=0,n=0;
	scanf("%d %d",&input,&n);
	printf("%d",power(input,n));
	
	return 0 ;
}
