#include<stdio.h>
int main(){
    FILE *fptr;
    char str1;
    int count=0,num=0;
    fptr=fopen("test7.txt","r+");
    str1=fgetc(fptr);
    while(str1!=EOF){
        if(str1==' '){
            count++;
        }
        num++;
        str1=fgetc(fptr);
    }
    printf("spaces is %d",count);
    printf("\ncharacter is %d",num-count);
    fclose(fptr);
    return 0;
}