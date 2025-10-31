#include<stdio.h>
int main(){
    FILE *fptr;
    int num;
    fptr=fopen("test.txt","r");
    if(fptr!=NULL){
    fscanf(fptr,"%d",&num);
    fclose(fptr);}
    num=num+1;
    printf("This is execution number %d",num);
    fptr=fopen("test.txt","w");
    fprintf(fptr,"%d",num);
    fclose(fptr);
}