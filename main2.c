#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main ()
{ 
    FILE *file = fopen("./test.txt", "r");

    if (file == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    int count = 0;
    char c;

    while ((c = fgetc(file)) != EOF) {
        if (c == '\n') {
            count++;
        }
    }

    fclose(file);

    printf("%d\n", count + 1);

    return 0;
}