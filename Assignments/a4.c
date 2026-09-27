#include<stdio.h>

// doubt------
// int main()
// {
//     int x;
//     x = sizeof('A');
//     printf("%d",x);
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int x;
//     x=sizeof(34.2345);
//     printf("%d",x);
//     printf("\n");
//     return 0 ;
// }

// int main()
// {
//     char ch='A';
//     // printf("%d",ch);
//     ch++;
//     // printf("\n%d",ch);
//     printf("\n%c",ch);
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int x=6,y=5,z=x;
//     x=y;
//     y=z;
//     printf("%d %d",x,y);
//     printf("\n");
//     return 0;
// }

int main()
{
    int x,y;
    printf("Enter two number: ");
    scanf("%d%d",&x,&y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("%d %d",x,y);
    printf("\n");
    return 0;
}