#include<stdio.h>
int main(){
    int sum =1;
    int input = 0;
    int answer = 0;
    scanf("%d",&input);
    for(int i = 1;i <= input;i ++){
        sum = sum * i;
        printf("sum = %d / i=%d\n",sum,i);
        answer = answer + sum;
    }
    printf("%d",answer);
    
	
	return 0;
}

