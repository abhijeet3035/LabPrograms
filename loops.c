#include<stdio.h>
int main(){
    float n,i,sum;
    printf("Enter value :");
    scanf("%f",&n);
    sum=0;
    for(i=1;i<=n;i++)
   { sum=sum+1/i;
    }
    printf("%f",sum);
}