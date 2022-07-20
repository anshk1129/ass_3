#include<stdio.h>
int main(){
int n,count=1;
printf("enter a number");
scanf("%d",&n);
if(n>=100&&n<=999||n==000){
    printf("three digit");
}
else 
printf("not a three digit number");
return 0;
}