#include<stdio.h>
int main(){
	int a[7],b=0,c=0,d=0,e=0;
	
	for(int i = 0; i <7; i++){
		scanf("%d",&a[i]);
		if(a[i]<50)
			b++;
		if(a[i]>=50&&a[i]<100)
			c++;
		if(a[i]>=100&&a[i]<150)
			d++;
		if(a[i]>=150)
		    e++	;
					
	}
	printf("good = %d\n",b);
	printf("normal = %d\n",c);	
	printf("bad = %d\n",d);	
	printf("very bad = %d\n",e);		
	
	
	
	return 0 ;
} 
