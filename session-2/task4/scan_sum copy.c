#include <stdio.h>
// 1 Write a program using `scanf()` to read 2 integer values from user input in the form `3 + 4 =`

//- we should use 2 integer variables to store the integer data
//- we can provide a format string the matches the expected form of the input
//    - eg. if we expected user input  

int main(void) {
    int num1, num2;
    char operator;
    int result;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter operator: ");
    scanf(" %c", &operator);  
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        result = num1 / num2;
    }

    printf("Result is: %d\n", result);

    return 0;
}


//2 Write the same program using `fgets()` and `sscanf()`
//- similar code can be used for `sscanf()` as `scanf()`

int main(void) {
    int num1, num2;
    char operator;
    int result;

    char buffer[100];
    printf("Enter first number: ");
    fgets(buffer, 100, stdin);
    sscanf(buffer, "%d", &num1);
    printf("Enter second number: ");
    fgets(buffer, 100, stdin);
    sscanf(buffer, "%d", &num2);
    printf("Enter operator: ");
    fgets(buffer, 100, stdin);
    sscanf(buffer, "%c", &operator);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        result = num1 / num2;
    }

    printf("Result is: %d\n", result);

    return 0;
}


//3 Generalise the code to read the operator as a character
//- ie. read the `+` as a char variable
//- you can now vary the operator as well as the values
//    - ie. `3 - 2`, `4 * 6`
//- you now have a model for starting a small calculator application

int main (void) {
    int num1, num2;
    char operator;
    int result;

    char buffer[100];
    printf("Enter first number: ");
    fgets(buffer, 100, stdin);
    sscanf(buffer, "%d", &num1);
    printf("Enter operator: ");
    fgets(buffer, 100, stdin);
    sscanf(buffer, "%c", &operator);
    printf("Enter second number: ");
    fgets(buffer, 100, stdin);
    sscanf(buffer, "%d", &num2);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        result = num1 / num2;   
    }

    printf("Result is: %d\n", result);

    return 0;
}


