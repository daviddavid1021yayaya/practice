#include<stdio.h>
int main(){
	int input, i,j,k;
    scanf("%d",&input);
    for(i=1;i<=input;i++){
        printf("\n");
        for(j=input;j>0;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
    }
    printf("\n");
 
 return 0;

}
