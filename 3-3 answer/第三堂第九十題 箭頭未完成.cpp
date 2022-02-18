#include <stdio.h>
int main(){
	int a ;
	scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("\n");
        for(int j=a;j>i;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int m=2;m<=i;m++){
            printf("*");
        }
        for(int n=a;n>i;n--){
            printf(" ");
        }
    }
    printf("\n");
	
	for(int p=0;p<a;p++){
    	printf("   ***\n");
	}

    return 0;
}
