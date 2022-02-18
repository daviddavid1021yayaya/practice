#include<stdio.h>
int main(){
	int j=0 ,tem=0;
	int num[10]={0};
	printf("please enter 10 number :");
	for(int i = 0;i < 10;i++){         
		scanf("%d",&num);
		for(j=0;j<10;j++){
			if(num[j]>num[j+1]){
		
			tem = num[j];
			num[j] = num[j+1];
			num[j+1] = tem;	
		}
		}
	}
	
	for(int i=0;i<10;i++){
		printf("%d\n",num[i]);	
	}	
	return 0 ;
}

/*int main(){
	int j=0 ,tem=0;
	int num[10]={0};
	printf("please enter 10 number :");
	for(int i = 0;i < 10;i++){            //這裡是錯在每次我書一個它就會直接比較 
		scanf("%d",&num);                 //輸入213 他就會直接排序會讓後面只顯示9 10 這種 
		if(num[j]>num[j+1]){              //有按照大小輸入的 
		
			tem = num[j];
			num[j] = num[j+1];
			num[j+1] = tem;	
		}
	}
	
	for(int i=0;i<10;i++){
		printf("%d\n",num[i]);	
	}	
	return 0 ;
}
*/

  
