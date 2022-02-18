#include <stdio.h>
#include <stdlib.h>


void Write(int *number,int array[]){
	int i ;
    FILE *f = fopen("C:\output.txt", "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        exit(1);                           //有點像BREAK的感覺  
    }                                      //如果沒成功就步要往下做了 
    fprintf(f,"%d\n",*number);             //fprintf動詞 
    for( i = 0;i < *number;i ++){
        fprintf(f,"%d\n",array[i]);
    }
    printf("Writing data to output.txt completed\n");
    fclose(f);                             //fclose動詞 
}   

