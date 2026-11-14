#include <stdio.h>
#include <math.h>
// int main(){
//     int x=0;
//     int arr[4][4];
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             arr[i][j] = x;
//             printf("%d ",arr[i][j]);
//             x++;
//         }
//         printf("\n");
//     }

//     // printf("%d",arr[0][0]);
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     for(int n = 2 ; n < 98 ; n++){
//         if(n==2){
//             printf("%d\n",n);
//         }
//         else if(n%2==0){
//             continue;
//         }
//         else if(n%2!=0){
//             for(int i = 3 ; i<=n ; i+=2){
//                 if(i>=(n/2)){
//                     printf("%d\n",n);
//                     break;
//                 }else if(n%i==0){
//                     break;
//                 }else continue;
//             }
//         }
//     }
// }

// int main()
// {
//     printf("%d\n",2);
//     for(int n=3;n<98;n+=2){
//         for(int i=3;i<=n;i+=2){
//             if(i>=(n/2)){
//                 printf("%d\n",n);
//                 break;
//             }else if(n%i==0){
//                 break;
//             }
//         }
//     }
// }

// int main()
// {
//     int a,b,c,d;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);
//     if(a>b){
//          c = b;
//          d = a;
//     }else {
//          c = a;
//          d = b;
//     }
//     for(int i=c;i<=d;i++){
//         if(i==2){
//             printf("%d\n",2);
//         }
//         else if(i%2==0){
//             continue;
//         }else{
//             for(int j=3;j<=i;j++){
//                 if(j>=(i/2)){
//                     printf("%d\n",i);
//                     break;
//                 }else if(i%j==0){
//                     break;
//                 }
//             }
//         }

//     }

// }

// int main()
// {
//     int n,a,j;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     a = n + 1;
//     if (n == 1)
//     {
//         printf("%d", 2);
//     }
//     else if (n == 2)
//     {
//         printf("%d", 3);
//     }
//     else{
//         for(int i=a;;i++){
//             if(i%2==0){
//                 continue;
//             }
//             else{
//                 for(j=3;j<=sqrt(i);j+=2)
//                     if(i%j==0)
//                         break;
                
//                 if(j>sqrt(i)){
//                     printf("%d",i);
//                     break;
//                 }
//             }
//         }
//     }

//     printf("\n");
//     return 0;
// }

int main(){
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);

    int ans = 1;

    for(int i=(a<b? a:b);i>=1;i--){
        if(a%i==0 && b%i==0){
            ans=i;
            break;
    }
}
    ans==1? printf("Are Co-prime"): printf("not Co-prime");
    printf("\n");
    return 0;
}
