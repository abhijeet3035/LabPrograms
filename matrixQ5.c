#include<stdio.h>
int main(){
    int s,i,j;
    printf("Enter size of matrix :");
    scanf("%d",&s);
    int arr1[s][s];
    int arr2[s][s];
    printf("Enter values in matrix 1 :");
    for(i=0;i<s;i++){
    for(j=0;j<s;j++){
        scanf("%d",&arr1[i][j]);
    }
    }
    printf("Enter values in matrix 2 :");
    for(i=0;i<s;i++){
    for(j=0;j<s;j++){
        scanf("%d",&arr2[i][j]);
    }
    }
    for(i=0;i<s;i++){
    for(j=0;j<s;j++){
        int product=0;
        product=arr1[i][j]*arr2[i][j];
        printf("%d\t",product);
    }
    printf("\n");
}
}