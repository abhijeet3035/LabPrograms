#include<stdio.h>
int main(){
    int i,n1=0,n2=1,n3,n;
    printf("Enter number :");
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("In Fibonacci series");}
    for(i=2;n2<=n;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        if(n==n2){
         printf("In Fibonacci series");
        break;
        }
        }
        if(n!=n2)
        {printf("Not in fibonacci series");}
    }