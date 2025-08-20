#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the value of a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    printf("Discriminant is %d",d );
    if(d>0){
        printf("\nroots are real and distinct");
    } else if(d=0){
    printf("\nroots are real and equal");
    } else {
        printf("\nroots are imaginary");
    }
}  