#include<stdio.h>
int main(){
int n;
printf("Enter the month number");
scanf("%d",&n);
if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
printf("no of days is 31");
else if(n==2)
printf("no of days is 28 or 29");
else
printf("no of dayes is 30");
return 0;
}