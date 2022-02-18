#include<stdio.h>
int main(){
	int a[10];
	int highest = 0,lowest = 10000, c = 0, b =0;
	for(int i = 0; i < 10 ;i ++){
		scanf("%d",&a[i]);
		if(a[i]>highest)
			highest = a[i];
		if(a[i]<lowest)
			lowest = a[i];
		if(a[i]<0)
			c ++;
		if(a[i]>10)
			b ++;
		
		
	}
	
	
	printf("highest = %d\n",highest);
	printf("lowest = %d\n",lowest);
	printf("a = %d\n",c);	
	printf("b = %d\n",b);	
	
	
	
	return 0 ;
}
