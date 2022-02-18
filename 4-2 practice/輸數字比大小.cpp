#include<stdio.h> 
int main(){
	int i, j, k;
	printf("please enter 3 number : \n") ;
	scanf("%d%d%d",&i,&j,&k);

	
	(i>j&&j>k)? printf("%d>%d>%d",i,j,k):0 ;
	(i>k>j)? printf("%d>%d>%d",i,k,j):0 ;
	(j>i>k)? printf("%d>%d>%d",j,i,k):0 ;
	(j>k>i)? printf("%d>%d>%d",j,k,i):0 ;
	(k>i>j)? printf("%d>%d>%d",k,i,j):0 ;
	(k>j>i)? printf("%d>%d>%d",k,j,i):0 ;

	
	return 0 ;
}
