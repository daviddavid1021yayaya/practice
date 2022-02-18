#include<stdio.h>

void swap(int *x,int *y){
    int temp; 
    temp = *x;
    *x = *y;
    *y = temp;
    printf("swap function:\na = %d \nb = %d\n",*x,*y);
}

int main(){
    int a = 10, b = 20;
    swap(&a,&b);
    printf("main:\na = %d \nb = %d\n",a,b);
    return 0;
}
