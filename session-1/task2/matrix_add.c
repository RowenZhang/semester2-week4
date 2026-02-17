
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
    for (int i=0; i<4; i++) {
         for (int j=0; j<4; j++) {
               a[i][j] = 1.0;
               b[i][j] = 1.0;
               c[i][j] = a[i][j] + b[i][j];
               printf("c[%d][%d] = %f\n", i, j, c[i][j]);
         }
    }

    return 0;
 }
