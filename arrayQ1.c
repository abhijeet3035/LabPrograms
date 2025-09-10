#include<stdio.h>
int main (){
    int i,n;
    printf("Enter number of values you want to enter :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++){
        printf("Enter values :");
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("  %d",a[i]);
    }
}