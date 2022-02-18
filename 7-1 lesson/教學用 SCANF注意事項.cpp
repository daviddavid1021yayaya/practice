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
    struct newdata student[5];                
    for(int i = 0;i < 5;i ++){              			//這裡不成立原因是 SCANF只能書數字    IF 前面加name = %S 要讓它顯示英文名字也要 
        scanf("name = %s",student[i].name);				//打 name = amy  才會顯示 amys birthday = %S 
        scanf("score = %d",&student[i].score);
        scanf("birthday.month = %d\n birthday.day = %d",&student[i].birthday.month,&student[i].birthday.day);
    }
    for(int i = 0;i < 5;i ++){
        printf("%s's birthday is %d,%d \n",student[i].name,student[i].birthday.month,student[i].birthday.day);
        printf("He got %d points!",student[i].score);
    }
    return 0;
}
