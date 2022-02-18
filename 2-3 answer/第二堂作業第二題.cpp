#include<stdio.h>
int main(){
    int sum = 0;
    int input = 0;
    scanf("%d",&input);
    for(int i = 1;i <= input;i ++){
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}

