#include<stdio.h>
int sum(int num){
        if (num>0){
     num=(num%10)+sum(num/10); 
     return num;  
    }
}
int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    printf("Sum of digits is  %d",sum(n)); 
}