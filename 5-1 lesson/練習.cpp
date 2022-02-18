#include<stdio.h> 		
int main(){
	int highest = 0, lowest = 100, passed = 0;
	int a[5];
	for(int i = 0; i < 5; i++){
		scanf("%d",&a[i]);
		if(a[5]>highest)
		highest = a[i];    //這裡不能放 a[5]會跑不出來  
		if(a[5]<lowest)
		lowest = a[i];
		if(a[5]>60)
		passed ++;
		
	
		
	}
	
		printf("highest = %d\n lowest = %d\n passed = %d",highest,lowest,passed);
	
	
	
	
	
	return 0 ;
}
