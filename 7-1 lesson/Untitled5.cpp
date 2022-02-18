#include<stdio.h>
#include<stdlib.h>

struct date{
    int month;
    int day;
};
struct mydata{
    char name[15];
    int score;
    struct date birthday;
};

void get_data(struct mydata *p);
void print_data(struct mydata a);

int main(){
    int total;
    scanf("%d",&total);
    //struct mydata student[30];
    struct mydata* student;
    student = (struct mydata*) malloc(total * sizeof(struct mydata));
    for(int i = 0;i < total;i ++){
        get_data(&student[i]);
        print_data(student[i]);
    }
    return 0;
}


