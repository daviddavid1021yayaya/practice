#include<stdio.h>
int main(){
    int a[20],b[20];
    float sum;
    a[0] = 2;
    b[0] = 1;
    for(int i = 1;i < 20;i ++){         //分子跟粉母分開處理 
        a[i] = a[i-1]+b[i-1];
        b[i]=a[i-1];
    }
    for(int i = 0;i < 20;i ++){
        printf("%d/%d\n",a[i],b[i]);
        sum +=  a[i]/b[i];
    }
    printf("ans = %f",sum);
    return 0;
}


