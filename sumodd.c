#include<stdio.h>
int main(){
    int i,sum,count;
    float average;
    sum=0;
    count=0;
    for ( i = 1; i <= 70; i++){
    if(i%2!=0){
    count=count+1;
    if(count<=15)
    sum=sum+i;
    average=sum/15;
    }
    }
    printf("Sum is :%d",sum);
    printf("\nAverage is :%f",average);   
    }