#include<stdio.h>
int factorial(int num){
        if (num>0){
     num=num*factorial(num-1); 
     return num;  
    }
    if (num==0){
        return 1;
    }
}
int main(){
    int n;
    printf("Enter number for factorial :");
    scanf("%d",&n);
    printf("factorial is %d",factorial(n)); 
}