#include<stdio.h>

int main(){
    int a[3]={100,300,500};
    for(int i = 0;i < 3;i ++){
        scanf("%d",&a[i]);
    }
    
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    
    return 0;
}
