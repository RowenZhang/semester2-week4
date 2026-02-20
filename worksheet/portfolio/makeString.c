
/*
Name:Zhengyunrui Zhang
Student ID:201725892
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[100];
    buffer[0] = '\0';

    // process the command-line data using appropriate string functions
      for (int i = 1; i < argc; i++) {
        strcat(buffer, argv[i]);
        if (i < argc - 1) {
            strcat(buffer, "-");
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}