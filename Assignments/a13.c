#include<stdio.h>

// int main()
// {
//     int n;
//     int sum = 0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     do{
//        sum+= n;
//         n--;
//     }while(n>0);
//     printf("%d",sum);
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int n;
//     int sum = 0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     do{
//         sum+=n*2;
//         n--;
//     }while(n>0);
//     printf("%d",sum);
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int n;
//     int sum = 0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     do{
//         sum+=n*2-1;
//         n--;
//     }while(n>0); 
//     printf("%d",sum);
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int n;
//     int sum = 0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     do{
//         sum+=n*n;
//         n--;
//     }while(n>0); 
//     printf("%d",sum);
//     printf("\n");
//     return 0;
// }

int main()
{
    int n;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    do{
        if(n<=0){
            break;
        }
        sum+=n*n*n;
        n--;
    }while(n>0); 
    printf("%d",sum);
    printf("\n");
    return 0;
}
// 💥 What happens during an overflow?