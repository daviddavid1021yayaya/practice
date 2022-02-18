#include<stdio.h>
int main(){
	int a=0,b=0,c=0,d=0,e=0,f=0;
	printf("enter 5 number : ");
	scanf("%d",&a);
	b = (a%100000 - a%10000)/10000;
	c = (a%10000 - a%1000)/1000;
	d = (a%1000 - a%100)/100;
	e = (a%100 - a%10)/10;
	f = a%10 ;
	
	if(b==f && c==e){    //if(b==f)&&(c==e) 不能這樣打匯錯 
		printf("yes");
	}else{
		printf("no");
	}
	
	
	
	
	
	return 0 ;
}
