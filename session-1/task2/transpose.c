
/*
 * Transpose of a matrix
 */

 #include <stdio.h>

 int main( void ) {
    int a[4][4];

    /*
    Intialise the matrix a to 2i-j.
    Print out matrix a. 
    Write code for the transpose - you can use other variables as necessary but not a cpoy of the matrix 
    Print the transpose.
    */
    for (int i=0; i<4; i++) {
         for (int j=0; j<4; j++) {
               a[i][j] = 2*i-j;
               printf("a[%d][%d] = %d\n", i, j, a[i][j]);
         }
    }

    return 0;
 }
