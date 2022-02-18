#include<stdio.h>

int main(){
    int num;
    printf("Please input a number:\n");
    scanf("%d",&num);
    printf("%d = ",num);
    for(int i = 2;i < num;i ++){             
        while(num != i){                 
            if(num % i == 0){
                printf("%d * ",i);
                num /= i;
            }else{
                break;
            }
        }
    }
    printf("%d", num);
    return 0;
}
