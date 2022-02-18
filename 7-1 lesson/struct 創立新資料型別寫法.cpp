#include<stdio.h>
#include<stdlib.h>


struct date{
    int month;
    int day;
};

struct newdata{
    char name[15];
    int score;
    struct date birthday;
};

int main(void){
    struct newdata student = {"Bob",90,{7,10}};
    printf("%s's birthday is %d,%d \n",student.name,student.birthday.day,student.birthday.day);
    printf("He got %d points!",student.score);
    return 0;
}
