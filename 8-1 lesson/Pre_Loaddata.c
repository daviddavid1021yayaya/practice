#include <stdio.h>
#include <stdlib.h>

void Load(int *number,int array[]){
    FILE *fp;
    int i;
    char* filename = "C:\input.txt";     //這裡放的式位置 
    fp = fopen(filename, "r");           // fopen這是動詞 
    if (fp == NULL){                     //空白檔案不適NULL 
        printf("Could not open file %s",filename);
    }
    fscanf(fp,"%d",number);              // fscanf這動詞 
    if(*number > 0){
        for( i = 0;i < *number;i ++){
            fscanf(fp,"%d",&array[i]);
        }
    }
    printf("Loading data from intput.txt completed\n");
    fclose(fp);
}
