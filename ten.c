#include <stdio.h>
int main()
{
    int cp, sp, x;
    float loss, profit;
    printf("Enter the cost price and selling price");
    scanf("%d %d",&cp,&sp);
    if (cp > sp)
    {
        x = cp - sp;
        loss = (x  * 100)/cp;
        printf("loss percentage is %f", loss);
    }
    else
    {
        x = sp - cp;
        profit = (x  * 100)/cp;
        printf("profit percentage is %f", profit);
    }
    return 0;
}