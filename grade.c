#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5,percent;
        printf("Enter subject 1 marks :");
    scanf("%d",&sub1);
        printf("Enter subject 2 marks :");
    scanf("%d",&sub2);
        printf("Enter subject 3 marks :");
    scanf("%d",&sub3);
        printf("Enter subject 4 marks :");
    scanf("%d",&sub4);
        printf("Enter subject 5 marks :");
    scanf("%d",&sub5);
    percent=(sub1+sub2+sub3+sub4+sub5)/5;
    printf("Percentage %d\n",percent);
    if(percent>=85){
        printf("Your grade is O ");
    }else if(percent>=75){
        printf("Your grade is A");
    }else if(percent>=60){
        printf("Your grade is B ");
    }else if(percent>=40){
        printf("Your grade is C ");
    }else if(percent>=35){
        printf("Your grade is D ");
    }else
        printf("Your grade is F ");
    
}
