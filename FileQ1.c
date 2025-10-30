#include<stdio.h>
int main(){
    FILE *fptr;
    char str1;
    fptr=fopen("store.txt","r+");
    str1=fgetc(fptr);
    if(str1==EOF){
        printf("File is empty");
    }
    else{
        printf("File is having a text");
    }
    fclose(fptr);
    return 0;
}