#include<stdio.h>
int main(){
    int v,c1=0,c2=0,c3=0,c4=0;
    char option='y';
    while(option=='y'){
        printf("Enter vote(1 - 4) :");
        scanf("%d",&v);
        if(v==1){
            c1=c1+1;
        }
        else if(v==2){
            c2=c2+1;
        }
        else if(v==3){
            c3=c3+1;
        }
        else if(v==4){
            c4=c4+1;
        }
        else {
            printf("Invalid number\n");
        }
        printf("press y to continue and n to end voting\n");
        scanf(" %c",&option);
    }
    printf("voting results :");
    printf("\nCandidate 1 :%d",c1);
    printf("\nCandidate 2 :%d",c2);
    printf("\nCandidate 3 :%d",c3);
    printf("\nCandidate 4 :%d",c4);
}