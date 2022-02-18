#include<stdio.h>
int main(){
	int a[10];
	int highest = 0, lowest = 100, fail = 0;
	for(int i = 0; i < 10; i++){
		scanf("%d",&a[i]);
		if(a[i] > highest)
			highest = a[i];
		if(a[i] < lowest)
			lowest = a[i];
		if(a[i] < 60)
			fail ++;	
			
	}
	
	printf("highest = %d\n",highest);
	printf("lowest = %d\n",lowest);
	printf("fail = %d",fail);	
	
	
	
	
	
	return 0;
}
