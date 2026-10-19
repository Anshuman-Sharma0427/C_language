#include <stdio.h>
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
// fact is declared but i didn't assign any value to it till now so it means it will have a garbage value right but it's not affecting the result of code

// int main()
// {
//     int n,count=0;
//     printf("Enter a number: ");
//     scanf("%d",&n);

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

//     printf("%d",count);
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int n;
//     int count = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int i = 2;
//     if (n != 1)
//     {
//         while (i < (n/2))
//         {
//             if (n % i == 0)
//             {
//                 count++;
//                 break;
//             }
//             i++;
//         }
//     }

//     if (n == 1 || n==0 || count == 1)
//     {
//         printf(" not prime");
//     }
//     else
//         printf("prime");

//     printf("\n");
//     return 0;
// }

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>1){
        int i=2;
        while(i<=(n/2)){
            if(n%i==0){
                printf("not prime");
                break;
            }
            i++;
        }
       if(i==n){
        printf("Prime");
       } 
    }
    else {
        printf("not prime");
    }
    printf("\n");
    return 0;
}