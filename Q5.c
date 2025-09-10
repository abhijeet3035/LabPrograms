#include<stdio.h>
int main (){
    int i,n,sum=0;
    float average=0;
    printf("Enter number of values you want to enter :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++){
        printf("Enter values :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    average=sum/n;
    printf("%f",average);
}