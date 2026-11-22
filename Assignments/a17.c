#include <stdio.h>

// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int i,j;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(j<=5-i){
//                 printf(" ");
//             }else{
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int i,j;
//     for(int i=1;i<=5;i++){
//         for(int j=5;j>=i;j--){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int i,j;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(j<i){
//                 printf(" ");
//             }else{
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int i,j;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(j>i){
//                 printf(" ");
//             }
//             else{
//                 printf(" %d",j);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int i,j;
//     for(int i=1;i<=4;i++){
//         for(int j=i;j>=1;j--){
//             printf(" %d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int i,j;
//     for(int i=1;i<=5;i++){
//         int x = 0;
//         for(int j=1;j<=5;j++){

//             if(i>j){
//                 printf(" ");
//             }
//             else{
//                 printf("%c",65+x);
//                 x++;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int x = 1;
//     for(int i=1;i<5;i++){
//         for(int j=1;j<5;j++){
//             if(i>=j){
//                 printf("%d ",x);
//                 x++;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int x = 65;
//     for (int i = 1; i <= 5; i++)
//     { 
//         int y = x; 
//         for (int j = 1; j <= 5; j++)
//         {
//             if (i <= j)
//             {
//                 printf("%c",y);
//                 y++;
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         x++;
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//           if(i==1 || i==5){
//             printf("* ");
//           }else if(j==1 || j==5){
//             printf("* ");
//           }else{
//             printf("  ");
//           }
//         }
//         printf("\n");
//     }
//     return 0;
// }