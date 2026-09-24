#include<stdio.h>
// int main()
// {
//     float x;
//     printf("Enter your amount in INR ");
//     scanf("%f",&x);
//     printf("%.2f INR in USD is %.4f (Assuming 1 USD = 84.23 INR) ",x,(x/84.23));
//     printf("\n");
//     return 0;
// }

int main()
{
    int x;
    printf("Enter a three digit number");
    scanf("%d",&x);
    // printf("%d",x%10);
    printf("Result is %d",((x%10)*100)+(x/10));
    printf("\n");
    return 0 ;
}