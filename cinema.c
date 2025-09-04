#include<stdio.h>
int main(){
    int seat,n,a,totalseat=0;
    float sum=0;
    char option='y';
    while(option=='y'){
    printf("1.Premium Seat - Rs200\n");
    printf("2.Standard Seat - Rs150\n");
    printf("3.Economy Seat - Rs100\n");
    printf("4.Exit\n");
    printf("Enter Seat preference :");
    scanf("%d",&seat);
    printf("Enter number of tickets :");
    scanf("%d",&n);
    switch (seat)
    {
    case 1:
        totalseat=totalseat+n;
        sum=sum +(n*200);
        break;
    case 2:
        totalseat=totalseat+n;
        sum=sum + (n*150);
        break;
    case 3:
        totalseat=totalseat+n;
        sum=sum + (n*100);
        break;
    case 4:
        break;}  
    printf("Do you want to continue? press (y/n)");
    scanf(" %c",&option);
}
if(totalseat>=5){
    sum=sum-(sum*0.05);
}
printf("Total bill is :%f",sum);
}