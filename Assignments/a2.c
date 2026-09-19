#include<stdio.h>

// int main()
// {
//     int a,b,c;
//     printf("Enter three numbers");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("The average is %d",(a+b+c)/3);
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     float a;
//     printf("Enter the radius of circle");
//     scanf("%f",&a);
//     printf("The circumference of circle is %.2f",2*3.14*a);
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     float p,r,t;
//     printf("Enter principal , rate and time(in years)");
//     scanf("%f%f%f",&p,&r,&t);
//     printf("The simple interest is %f",p*r*t);
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     float l,w,h;
//     printf("Enter the length , width and height of cuboid");
//     scanf("%f%f%f",&l,&w,&h);
//     printf("The volume of cuboid is %f",l*w*h);
//     printf("\n");
//     return 0;

// }

int main()
{
    int cp,sp;
    printf("Enter the cost and selling price of 1 dozen bananas");
    scanf("%d%d",&cp,&sp);
    // float c=cp/12.0,s=sp/12.0;
    // printf("%f %f",c,s);
    if (cp<sp)
    {
        printf("You have a profit of %.2f on selling 25 bananas",25*((sp-cp)/12.0));
        printf("\n");
    }

    else{
        printf("You have a loss of %.2f on sellign 25 bananas",25*((cp-sp)/12.0));
        printf("\n");
    }

    return 0;
}