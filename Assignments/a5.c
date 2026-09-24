#include<stdio.h>
// int main()
// {
    // int a,b,c;
    // printf("Enter three numbers ");
    // scanf("%d%d%d",&a,&b,&c);
    // printf("The sum of %d, %d and %d is %d",a,b,c,a+b+c);

    // char x='+';
    // // int x='+';    
    // // printf("the ASCII code of '+' is %c",x);
    // printf("the ASCII code of '+' is %d",x);  
    // printf("\n%lu",sizeof(x));
    // will give + becuz in int variable we have declared we have binary as data stored in the variable and in printf statement we mention the character format specifier which means represent that data in character form. 
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int x;
//     char ch;
//     double db;
//     float fl;
//     printf("%lu\n%lu\n%lu\n%lu",sizeof(x),sizeof(ch),sizeof(db),sizeof(fl));
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int x;
//     printf("Enter a number");
//     scanf("%d",&x);
//     printf("result: %d",(x/10)*10);
//     printf("\n");
//     return 0;

// }

int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a digit which you want as your last digit: ");
    scanf("%d",&b);
    printf("%d",(a*10)+b);
    printf("\n");
    return 0;

}