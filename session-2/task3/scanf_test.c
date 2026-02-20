
#include <stdio.h>

int main( void ) {
    int i,j,k;

    int count = scanf("%d %d %d",&i,&j,&k);

    printf("Read %d values\n",count);
    printf("Values: %d %d %d\n",i,j,k);

    char buffer[100];
    fgets(buffer,100,stdin);
    printf("Buffer: %s\n",buffer);
    int count2 = sscanf(buffer,"%d %d %d",&i,&j,&k);
    printf("Read %d values\n",count2);
    printf("Values: %d %d %d\n",i,j,k);

    return 0;
}
