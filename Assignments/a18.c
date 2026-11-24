#include<stdio.h>

// int main(){
//     int a = 0;
//     int mid = 6/2;
//     for(int i=1;i<=4;i++){
//         for(int j=0;j<=6;j++){
//             if(j>=mid-a && j<=mid+a){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         a++;
//         printf("\n");
//     }
    
//     return 0;
// }

// int main(){
//     int a = 3;
//     for(int i=1;i<=4;i++){
//         for(int j=0;j<=6;j++){
//             if(j>=3-a && j<=3+a){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         a--;
//         printf("\n");
//     }
//     return 0;
// }

int main(){
    int a = 0;
    for(int i=1;i<=4;i++){
        for(int j=0 ; j<=6;j++){
            if(j>=3-a && j<=3+a){
                if((a%2==0 && j%2==0 )|| j==3-a){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else{
                printf(" ");
            }
        }
        a++;
        printf("\n");
    }
    
}

