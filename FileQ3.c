#include<stdio.h>
int main(){
    FILE *fptr;
    char str1;
    fptr=fopen("test1.txt","r+");
    str1=fgetc(fptr);
    while(str1 != EOF){
    printf("%c",str1);
    str1=fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}