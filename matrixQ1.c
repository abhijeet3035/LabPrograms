#include<stdio.h>
int main(){
    int s,i,j,sum=0,product=1;
    printf("Enter size of matrix :");
    scanf("%d",&s);
    int arr[s][s];
    printf("Enter values in matrix :");
    for(i=0;i<s;i++){
    for(j=0;j<s;j++){
        scanf("%d",&arr[i][j]);
    }
    }
    for(i=0;i<s;i++){
    for(j=0;j<s;j++){
        if((i+j)==(s-1)){
        sum=sum+arr[i][j];
        product=product*arr[i][j];
    }}}
    printf("Sum is %d",sum);
    printf("\nProduct is %d",product);
}