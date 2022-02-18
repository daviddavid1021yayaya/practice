#include<stdio.h>
int main(){
	int e[5];
	int a=0,b=0,c=0,d=0;
	for(int i = 0; i< 5 ;i++){
		scanf("%d",&e[i]);
		if(e[i]>a)
			a = e[i];
		if(e[i]>900)
			b ++;
		if(e[i]>600&&e[i]<=700)
			c ++;
		
		
	}
	//d部會寫 全部E[5]加起來處以5 if?
	
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
//	printf("%d",d);
	
	
	
	return 0;
}
