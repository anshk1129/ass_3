#include<stdio.h>
int main(){
    int n;
printf("enter a number");
scanf("%d",&n);
if(n%2==0 && n%3==0){
    printf("The number %d is divisible by 3 and 2",n);
}
else
printf("Not divisible");
return 0;
}