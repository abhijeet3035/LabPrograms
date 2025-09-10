#include<stdio.h>
int main (){
int i,n,j,count;
    printf("Enter number of values you want to enter :");
    scanf("%d",&n);
    int a[n];
    printf("Enter values :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
            count=count+1;
            }if(count<2){
        printf("  %d",a[j]);
        }}
        break;
    }}