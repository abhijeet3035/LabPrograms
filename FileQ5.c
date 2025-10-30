#include<stdio.h>
int main(){
    FILE *fptr;
    char str1;
    int count=0;
    fptr=fopen("test5.txt","r+");
    str1=fgetc(fptr);
    while(str1!=EOF){
        if(str1=='\n'){
            count++;
        }
        str1=fgetc(fptr);
    }
    printf("lines is %d",count+1);
    fclose(fptr);
    return 0;
}