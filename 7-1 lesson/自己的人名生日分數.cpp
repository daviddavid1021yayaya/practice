#include<stdio.h> 
struct date{
	int month;
	int day;
};


struct newdata{
	char name[20];
	int score;
	struct date birthday;
};


int main(){
	struct newdata student[2];
	for(int i = 0;i < 2;i++){
		scanf("%s",student[i].name);
		scanf("%d %d",&student[i].birthday.month,&student[i].birthday.day);
		scanf("%d",&student[i].score);
	}
	for(int i = 0;i < 2;i++){
		printf("%s's birhtday is %d,%d\n",student[i].name,student[i].birthday.month,student[i].birthday.day);
		printf("he got %d grade\n",student[i].score);
	}
	
	return 0 ;
}
