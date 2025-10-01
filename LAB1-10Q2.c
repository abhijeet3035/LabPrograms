#include<stdio.h>
int slargest(int arr[],int n){
    int f=arr[0],s=arr[0],i;
    for(i=0;i<n;i++){
        if(arr[i]<f){
            f=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]!=f){
            if(arr[i]<s){
                s=arr[i];
            }
        }
    }
    return s;
}
int main (){
    int n,i,r;
    printf("Enter number of elements :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    r=slargest(arr,n);
    printf("Second largest number is %d",r);
}