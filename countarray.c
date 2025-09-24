#include<stdio.h>
int main (){
    char s[100];
    int i,a=0,d=0,c=0;
    printf("Enter in string");
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i] != '\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            a=a+1;
        }
        else if(s[i]>='0' && s[i]<='9'){
            d=d+1;
        }
        else {
            c=c+1;
        }

}
printf("\nAlphabets %d",a);
printf("\nDigits %d",d);
printf("\nSpecial characters %d",c);
}