#include<stdio.h>
int sort(int arr[],int n){
    int i,j,c;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
}
int main (){
    int n,i;
    printf("Enter number of elements :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    printf("sorted array :");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}