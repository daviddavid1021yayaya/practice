#include<stdio.h>
int main(){
	char d[3][9]={"hello","apple","hi"};
	for(int i = 0;i < 3; i++){
		for(int j = 0;j < 6;j++){
			printf("%s\n",d[i]);
		}

	}
	
	return 0 ;
}
