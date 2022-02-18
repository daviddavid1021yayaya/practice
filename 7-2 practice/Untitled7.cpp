#include<stdio.h>
//#define CLOCK int

typedef struct{
    int minite;
    float second;
} time;

int main(){
    //typedef int clock;
    //clock hour, second;
    //CLOCK hour, second;
    
    //time data = {3, 2.75}
    time data;  
    scanf("%d %f",&data.minite,&data.second);
    printf("%d %f",data.minite,data.second);
    
    return 0;
}

