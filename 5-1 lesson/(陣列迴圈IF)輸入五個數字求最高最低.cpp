#include<stdio.h>
int main(){
	int a[5];
	int highest = 0, lowest = 100,passed = 0;
	for(int i = 0; i < 5 ;i++){
		scanf("%d",&a[i]);
		if(a[i]>highest)
			highest = a[i];
		if(a[i]<lowest)
			lowest = a[i];
		if(a[i]>60)
			passed ++;	
	}

	printf("highest = %d\nlowest = %d\npassed = %d",highest,lowest,passed);
	return 0 ;
}
