#include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter Two Numbers");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     printf("Sum is %d",c);
//     return 0;
// }


// int main()
// {
//     int a='A',b='B',c=a+b;
//     // printf("Enter Two Numbers");
//     // scanf("%d%d",&a,&b);
//     c=a+b;
//     printf(c);
//     return 0;
// }

// int main(){
    // int a=5,b=6,c=a+b;
    // char c = 65; still prints A because of compiler see this as the encoding character
    // char c = 'A';
    // printf("%d,%d\n%d",a,b,c);
    // printf("%d+%d=%d",a,b,a+b);
    // printf("Welcome\\rStudents");
    // printf("Student");

    // printf("Sum of %d and %d is %d",a,b,a+b);
    // print('%d',a); will give error because '' are for character constant and the length is 1 , can't be more than 1.

//     int a,b;
//     printf("Please Enter Two Numbers");
//     scanf("%d%d",&a,&b);
//     printf("Sum of %d and %d is %d",a,b,a+b);
//     return 0;
// }

// int main()
// {
//     int x=5,y;
//     y=++x;
//     printf("%d %d", x,y);

//     printf("\n");
//     return 0;



// }

int main()
{
    int a;
    double x;
    float y;
    char z; 
     // By printing the sizeof char variable we will get 1 but if we direct prints the char.. constant like 'a' the we will get 4 byte as answer because we know that all charc.. have their ascii keys means numbers which are stored later in the form of 0s and 1s but when we declare a variable of char type then it will print 1 beacuse one char will always be of 1 byte size.....  
    
    
     // x=sizeof(float); -- 4
    // y=sizeof(double); -- 8
    // z=sizeof(int); --4


    // x = sizeof(34);  -- 4
    // y=sizeof('A');   -- 4
    // z=sizeof(2.34);  -- 8 (because any real constant is of double type by default )

    a = sizeof(x);
    printf("\n%d",a);
    a=sizeof(y);
    printf("\n%d",a);
    a =sizeof(z);
    printf("\n%d",a); 

    // printf("%d\n%f\n%d",x,y,z);
    printf("\n");
    return 0;
}