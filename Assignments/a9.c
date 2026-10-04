#include<stdio.h>

// int main()
// {
//     int x,y;
//     printf("Enter the cost price and selling price: ");
//     scanf("%d %d",&x,&y);
//     // printf("%f" , x*100.0);
//     if(x>y)
//       printf("%.2f is your loss percentage",((x-y)*100.0)/x);
//     else
//       printf("%.2f is your profit percentage",((y-x)*100.0)/y);
//     printf("\n");
//     return 0;
// }


// int main()
// {
//     char x;
//     printf("Enter one letter: ");
//     scanf("%c",&x);
//     if(x>64 && x<91)
//     printf("%c is a uppercase letter",x);
//     else
//     printf("%c is lowercase letter",x);

//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     if(x%6)
//     printf("Not divisible by 2 and 3");
//     else
//     printf("divisible by 2 and 3");
    

//     printf("\n");
//     return 0;
// }

int main()
{
    int x;
    printf("Enter a numbner");
    scanf("%d",&x);
    if(x%7)
    printf("Not divisible by 7\n");
    else
    printf("Divisible by 7\n");
    if(x%3)
    printf("Not divisible by 3");
    else
    printf("Divisible by 3");

    printf("\n");
    return 0;
}