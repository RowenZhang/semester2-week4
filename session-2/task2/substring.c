/*
 * Find a substring within a given string
 */

 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"
 #include <stdio.h>
 #include <string.h>

 int main(void) {
    char str1[100] = "The quick brown fox jumped over the lazy dog";
    char str2[100] = "ump";

    // use the appropriate string function to find the substring and print the result as pointer, character and string
    char *result = strstr(str1, str2);
    if (result != NULL) {
        printf("Substring found at pointer: %p\n", result);
        printf("Substring found as character: %c\n", *result);
        printf("Substring found as string: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
 }

 /*  Hints:
 1. include the appropriate libraries
 2. create the main function
 3. define the program data as strings
 4. using the string library documentation find the appropriate string function
 5. implement the solution and compute the answer  
 6. print the answer appropriately as pointer, character and string
 */ 

