#include<stdio.h>
int main(){
	int a[5],c=0,b=0;
	for(int i = 0; i <5; i++){
		scanf("%d",&a[i]);
		if(a[i]>=1&&a[i]<30)
			c ++;	
		if(a[i]<60&&a[i]>=10)
			b ++;	
		
		
		
	}
	
	printf("%d\n",c);
	printf("%d\n",b);	
	
	
	
	return 0 ;
}
