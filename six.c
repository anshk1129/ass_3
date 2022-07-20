#include<stdio.h>
int main(){
int n,n2;
printf("enter two numbers");
scanf("%d %d",&n,&n2);
if(n>=n2){
    printf("%d is greater",n);
}
else{
    printf("%d is greater",n2);
}

return 0;
}