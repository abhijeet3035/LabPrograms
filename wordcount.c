#include<stdio.h>
int main (){
    char s[100];
    int i,word=0;
    printf("Enter in string");
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i] != '\0';i++){
        if(s[i]==' '){
            word=word+1;
        }
    }
    printf("Total words is %d",word+1);
}