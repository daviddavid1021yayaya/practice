#include<stdio.h>

int main(){
    int a = 4;
    for(int i = 0; i < a ; i ++){
        for(int j = 0;j <= i;j ++){
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}
