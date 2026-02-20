
#include <stdio.h>

int main( void ) {

    // define suitable data
    int num1, num2;
    int sum;

    // use scanf to read from the terminal
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // print the output from scanf and the data values 
    printf("First number is %d\n", num1);
    printf("Second number is %d\n", num2);
    
    sum = num1 + num2;
    printf("Sum is %d\n", sum);

    return 0;
}