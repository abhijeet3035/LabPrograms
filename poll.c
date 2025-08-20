#include<stdio.h>
int main(){
    int vote;
    int x=0,y=0,z=0;
    printf("1 for candidate x\n");
    printf("2 for candidate y\n");
    printf("3 for candidate z\n");
    printf("Enter your Number");
    scanf("%d",&vote);
    switch(vote)
    {
    case 1:
    x=x+1;
    break;
    case 2:
    y=y+1;
    break;
    case 3:
    z=z+1;
    break;
    }
    printf("Voting Results :\n");
    printf("Candidate x : %d",x);
    printf("\nCandidate y : %d",y);
    printf("\nCandidate z : %d",z);
}