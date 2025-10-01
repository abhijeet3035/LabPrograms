#include<stdio.h>
int swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int x,y;
    printf("Enter values to swap :");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("After swapping x=%d y=%d",x,y);
}