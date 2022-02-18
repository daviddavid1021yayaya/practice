#include<stdio.h>

void swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("swap function:\nx = %d \n  y = %d\n",x,y);
}

int main(){
    int a = 10, b = 20;
    swap(a,b);
    printf("main:\na = %d \n  b = %d\n",a,b); //原本寫完這串AB位置要互換
	                                          //此時需要用到POINTER來交換
											  //會不成立的原因是XY直跟AB直梅關西
											  //要使他成立需要加& 讓他交換的是背後的地指而非職 
    return 0;
}
