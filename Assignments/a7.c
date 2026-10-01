#include<stdio.h>

// int main()
// {
//     int x;
//     printf("Enter a Number: ");
//     scanf("%d",&x);
//     if(x>0){
//         printf("%d is positive",x);
//     }else{
//         printf("%d is non positive",x);
//     }
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int x;
//     printf("Enter a Number: ");
//     scanf("%d",&x);
//     if(x%5==0){
//         printf("%d id divisible by 5",x);
//     }else{
//         printf("%d is not divisible by 5",x);
//     }
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     if(x%2==0){
//         printf("It is a even number");
//     }else{
//         printf("It is a odd numner");
//     }
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     if(x==2*(x/2))
//     {
//         printf("%d is a even number",x);
//     }else{
//         printf("%d is an odd number",x);
//     }
//     // printf("%d",x);
//     printf("\n");
//     return 0;
// }

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x == (x|1)){
        printf("%d is a odd number",x);
    }else{
        printf("%d is a even number",x);
    }
    // printf("%d",x);
    printf("\n");
    return 0;
    
}