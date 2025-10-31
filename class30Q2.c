#include<stdio.h>
int main(){
    FILE *fptr1,*fptr2;
    char ch;
    fptr1=fopen("text1.txt","r");
    fptr2=fopen("text2.txt","w");
    while(ch=(fgetc(fptr1))!=EOF){
        fputc(ch,fptr2);
    }
    printf("copied done");
    fclose(fptr1);
    fclose(fptr2);
}