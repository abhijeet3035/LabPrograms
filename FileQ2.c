#include<stdio.h>
int main(){
    int x,y,s,*p1,*p2;
    printf("Enter two numbers :");
    scanf("%d %d",&x,&y);
    p1=&x;
    p2=&y;
    s=*p1+*p2;
    printf("Sum is %d",s);
}