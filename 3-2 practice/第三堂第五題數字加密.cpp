#include<stdio.h>
int main(){
	int input = 0;
	scanf("%d",&input);
	int a,b,c,d;
	a = (input%10000 - input%1000)/1000;
	b = (input%1000 - input%100)/100;
	c = (input%100 - input%10)/10;
	d = (input%10);
	
	int e,f,g,h;
	e = (a + 7)%10;
	f = (b + 7)%10;
	g = (c + 7)%10;
	h = (d + 7)%10;
	
	
	int temp;
	temp = e;
	e = g;
	g = temp;
	
	int temo;
	temo = f;
	f = h;
	h = temo;
	
	printf("%d%d%d%d",e,f,g,h);
	//建議可以直接 e跟g 直接調換位置
	 


	return 0;
} 
