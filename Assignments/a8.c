#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    // x = x/100;
    if((0< (x/100)) &&((x/100) <=9)){
        printf("%d is a three digit number",x);
    }else{
        printf("%d is not a three digit number",x);
    }
    // printf("%d",x);
    printf("\n");
    return 0;
}

// int main()
// {
//     int x,y;
//     printf("Enter two number: ");
//     scanf("%d %d",&x,&y);
//     if(x>y){
//         printf("%d is greater than %d",x,y);
//     }else if(x==y){
//         printf("Both are equal");
//     }else{
//         printf("%d is greater than %d",y,x);
//     }
//     printf("\n");
//     return 0;
// }

