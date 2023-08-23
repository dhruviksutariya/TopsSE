#include <stdio.h>
 
// Function prototypes
int input();
void output(float);
 
// driver code
int main()
{
    float result;
    int choice, num;
 
    // printing menu
    printf("Press 1 to calculate area of circle\n");
    printf("Press 2 to calculate area of square\n");
    printf("Press 3 to calculate area of sphere\n");
    printf("Enter your choice:\n");
 
    // taking input
    choice = input();
 
    // switch statement to print output according to the
    // choice
    switch (choice) {
    case 1: {
        printf("Enter radius:\n");
        num = input();
        result = 3.14 * num * num;
        printf("Area of sphere=");
        output(result);
        break;
    }
    case 2: {
        printf("Enter side of square:\n");
        num = input();
        result = num * num;
        printf("Area of square=");
        output(result);
        break;
    }
    case 3: {
        printf("Enter radius:\n");
        num = input();
        result = 4 * (3.14 * num * num);
        printf("Area of sphere=");
        output(result);
        break;
    }
    default:
        printf("wrong Input\n");
    }
    return 0;
}
 
// function to take input
int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}
 
// function to print output
void output(float number) { printf("%f", number); }
