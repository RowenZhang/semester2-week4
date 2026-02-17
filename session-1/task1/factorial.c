
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];
   
    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    for (int i=0; i<20; i++) {
        f[i] = 1;
        for (int j=1; j<=i; j++) {
            f[i] *= j;
        }
    }
    
      for (int i=0; i<20; i++) {
         printf("%d! = %d\n", i, f[i]);
      }

    return 0;
 }
