#include<stdio.h>
int main(){
	int i = 0;
	printf("please enter i = ");
	scanf("%d",&i);
	
int sum=0; 
do {
    sum += i;
    printf("i=%d\n", i);
    printf("sum=%d\n",sum);
    printf("\n");
    i += 2; 
} while (i<=9);



return 0;
}
