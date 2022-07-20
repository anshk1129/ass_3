#include<stdio.h>
int main(){
    int n;
printf("enter a number");
scanf("%d",&n);
if(n%3==0 || n%7==0){
    printf("%d is divisible by 3 or  7",n);
}
else
printf("Not divisible");
return 0;
}