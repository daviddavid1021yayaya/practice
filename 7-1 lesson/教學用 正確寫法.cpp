#include<stdio.h>


struct date{
    int month;
    int day;
};

struct newdata{
    char name[15];
    int score;
    struct date birthday;
};

int main(){
    struct newdata student[2];
    for(int i = 0;i < 2;i ++){
        scanf("%s",student[i].name);
        scanf("%d",&student[i].score);
        scanf("%d %d",&student[i].birthday.month,&student[i].birthday.day);
    }
    for(int i = 0;i < 2;i ++){
        printf("%s's birthday is %d¤ë,%d¸¹ \n",student[i].name,student[i].birthday.month,student[i].birthday.day);
        printf("He got %d points!\n",student[i].score);
    }
    return 0;
}

/*
input
Amy
50
12 10
Bob
90
02 20


*/


