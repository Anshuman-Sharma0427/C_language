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
    int x,a,b,c;
    printf("Enter a three digit number");
    scanf("%d",&x);
    // printf("%d",x%10);
    printf("Result is %d",((x%10)*100)+(x/10));

    a = (10>8)>4; // False
    b = (!2)>-2;  // True
    c = 3<0 && 5>0;   // False
    int z = !2;
    printf("\n%d %d %d\n",a,b,c);
    printf("%d",z);
    printf("\n");
    return 0 ;
}