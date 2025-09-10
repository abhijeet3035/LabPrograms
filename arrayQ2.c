#include<stdio.h>
int main(){
    int n,product;
    printf("Enter number :");
    scanf("%d",&n);
    product=1;
    while(n>0){
        product=product*n;
        n=n-1;
    }
    printf("factorial is %d",product);
}