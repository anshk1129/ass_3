#include<stdio.h>
int main(){
int a,b,c,x,y;
printf("Enter roots");
scanf("%d %d %d",&a,&b,&c);
x=(b*b);
y=(4*a*c);
if(x>y)
printf("roots are real and different");
else if(x==y)
printf("roots are real and both roots are same");
else
printf("roots are complex (not real)");
return 0;
}