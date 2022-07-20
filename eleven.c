
#include <stdio.h>

int main() {
    float s1,s2,s3,s4,s5;


    printf("Enter the marks of five subjects::\n");
    scanf("%f%f%f%f%f", &s1,&s2,&s3,&s4,&s5);

     if(s1>=33&&s2>=33&&s3>=33&&s4>=33&&s5>=33)
     printf("The student is pass");
     else
     printf("The student is fail");
    return 0;
}