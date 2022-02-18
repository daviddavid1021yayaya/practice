#include<stdio.h>
int fibonacci(int n) { 
    if (n==1 || n==2){
        return 1; 
    }else{
        return fibonacci(n-1)+fibonacci(n-2); 
    } 
}



int main(){
    int num;
    num = fibonacci(10);
    //num = fibonacci(9) + fibonacci(8)
	printf("%d",num);
}
