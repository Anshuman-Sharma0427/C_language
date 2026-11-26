#include<stdio.h>
#include <math.h>

// int main(){
//     int n,a=-1,b=1,c;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     while(n){
//         c = a+b;
//         if(c==n){
//             printf("It is present");
//             break;
//         }else if(c>n){
//             printf("It is not present");
//             break;
//         }
//         a = b;
//         b = c;
//         n--;
//     }
//     // printf("%d ",c);
//     printf("\n");
//     return 0;

// }

int main(){
    int n=1,sum,count,a;
    // printf("Enter a Number: ");
    // scanf("%d",&n);
    
    while(n<10){
        count = 0;
        sum = 0;
        a=n;
    while(a){
        a/=10;
        count++;
    }
    a = n;
    while(a){
        int digit = a%10;
        int arm = (int)round(pow(digit, count));
        sum+= arm;
        a/=10; 

    }
    
    if(sum == n){
        printf("%d\n",n);
    }
    n++;
}
    
    printf("\n");
    return 0;
}

