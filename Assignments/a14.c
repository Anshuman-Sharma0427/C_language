#include<stdio.h>
// int main()
// {
//     int f;
//     int fact=1;
//     printf("Enter a number: ");
//     scanf("%d",&f);
//     for(int i=1;i<=f;i++){
//         fact*=i;
//     }
//     printf("%d",fact);
//     printf("\n");
//     return 0;
// }
//fact is declared but i didn't assign any value to it till now so it means it will have a garbage value right but it's not affecting the result of code

int main()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    // while(n/10){
    //     count++;
    //     n = n/10;
    // }
    // count+=1;

    // int i=0;
    // while(i<n*10){
    //     count++;
    //     n/=10;
    //     i++;
    // }
    printf("%d",count);
    printf("\n");
    return 0;
}