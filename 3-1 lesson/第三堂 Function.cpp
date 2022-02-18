#include<stdio.h>

int sum(int a,int b){
    return a + b;
}


int main(){
    int x = 4000; int y = 2000000000;
    printf("%d",sum(x,y));
    return 0;
}
