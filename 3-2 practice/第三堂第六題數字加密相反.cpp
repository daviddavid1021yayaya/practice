#include<stdio.h> 
int main(){
	int input = 0;
	scanf("%d",&input);
	int a,b,c,d;
	a = (input%10000 - input%1000)/1000;
	b = (input%1000 - input%100)/100;
	c = (input%100 - input%10)/10;
	d = (input%10);
	
	int temp;
	temp = a;
	a = c;
	c = temp;
	
	int temo;
	temo = b;
	b = d;
	d = temo;
	
	int e,f,g,h;
	e = (a + 10 - 7)%10;
	f = (b + 10 - 7)%10;
	g = (c + 10 - 7)%10;
	h = (d + 10 - 7)%10;
	
	printf("%d%d%d%d",e,f,g,h);
	
	
	
	
	
	
	return 0;
}
