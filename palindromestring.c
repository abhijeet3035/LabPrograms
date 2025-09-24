#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i,l,found=1;
    printf("Enter in string :");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l/2;i++){
        if(s[i] != s[l-1-i]){
        found=0;
        break;
        }
    }
    if(found==1){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
}