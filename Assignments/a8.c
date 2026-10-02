#include<stdio.h>
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     if(99<x && x<1000){
//         printf("%d is a three digit number",x);
//     }else{
//         printf("%d is not a three digit number",x);
//     }
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int x,y;
//     printf("Enter two number: ");
//     scanf("%d %d",&x,&y);
//     if(x>y){
//         printf("%d is greater",x);
//     }else{
//         printf("%d is greater",y);
//     }
//     printf("\n");
//     return 0;
// }


// int main()
// {
//     int x,a,b,c;
//     printf("Enter the value of a,b,c(ax^2+bx+c): ");
//     scanf("%d %d %d",&a,&b,&c);
//     x = b*b-(4*a*c);
//     if(x>0){
//         printf("roots are real and distinct");
//     }else if(x<0){
//         printf("Roots are imaginary");
//     }else{
//         printf("Roots are real and same");
//     }

//     printf("\n");
//     return 0;
// }


// int main()
// {
//     int x;
//     printf("Enter a year: ");
//     scanf("%d",&x);
//     if((x%4==0 && x%100!=0) || (x%400==0)){
//         printf("%d is a leap year",x);
//     }else{
//         printf("%d is not a leap year",x);
//     }
//     printf("\n");
//     return 0;
// }

int main()
{
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && x>z){
        printf("%d is greatest",x);
    }else if(y>z){
        printf("%d is greatest",y);
    }else{
        printf("%d is greatest",z);
    }
    printf("\n");
    return 0;
}

// int main()
// {
//     int x;
//     printf("Enter a three digit number: ");
//     scanf("%d",&x);
//     // printf("%d",(x - (x/10/10)*100)*10);
//     // printf("%d",((x-(x/10/10)*100)*10+(x/10/10)));
//     // printf("%d",(x%10)*100 + ((x/10)%10)*10 + x/10/10);
//     printf("%d",((x/10)%10)*100 + (x%10)*10 + x/10/10);
//     printf("\n");
//     return 0;
// }