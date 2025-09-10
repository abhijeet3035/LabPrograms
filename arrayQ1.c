#include<stdio.h>
int main(){
    int i,a,b;
    printf("Enter number 1 :");
    scanf("%d",&a);
    printf("Enter number 2 :");
    scanf("%d",&b);
    for(i=a;i<=b;i++){
        if(i%2==0){
            printf("  %d",i*i);
        }
        if(i%2!=0){
            printf("\n  %d",i*i*i);
        }
    }
}