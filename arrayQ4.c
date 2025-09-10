#include<stdio.h>
int main (){
    int i,n,search;
    printf("Enter number of values you want to enter :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++){
        printf("Enter values :");
        scanf("%d",&a[i]);
    }
    printf("Enter number you want :");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(a[i]==search){
            printf("at this position of array  %d",i+1);
        }
    }
}