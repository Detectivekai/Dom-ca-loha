#include <stdio.h>
#include <string.h>

int main() {

    FILE *file = fopen("./test.txt", "r");
 
    if (file == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    char line[1024];
    char longest[1024];
    longest[0] = '\0';

    while (fgets(line, sizeof(line), file)) {
        if (strlen(line) > strlen(longest)) {
            strcpy(longest, line);
        }
    }

    printf("%s", longest);

    fclose(file);
    return 0;
}
