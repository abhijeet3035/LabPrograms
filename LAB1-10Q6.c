#include<stdio.h>
struct student{
    char name[10];
    int marks,rollno;
}s1;
struct student input(){
    struct student s;
    printf("Enter name");
    gets(s.name);
    printf("Enter marks :");
    scanf("%d",&s.marks);
    printf("Enter roll no. :");
    scanf("%d",s.rollno);
    return s;
}
void display(struct student s){
    printf("Name %s",s.name);
    printf("\nRoll no. :",s.rollno);
    printf("\nMARKS :",s.marks);
}
int main(){
    s1 = input();
    display(s1);
    return 0;
}