#include<stdio.h>
int main(){
    int sum =1;
    int input = 0;
    scanf("%d",&input);
    for(int i = 1;i <= input;i ++){
        sum = sum * i;
        printf("sum = %d / i=%d\n",sum,i);
        
    }
    printf("%d",sum);
    return 0;
}


