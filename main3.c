#include <stdio.h>

void main() {
    FILE *file1 = fopen("file1.txt", "r");
    FILE *file2 = fopen("file2.txt", "w");

    if (file1 == NULL || file2 == NULL) {
        printf("Cannot open files\n");
        return 1;
    }

    char c;
    while ((c = fgetc(file1)) != EOF) {
        fputc(c, file2);
    }

    fclose(file1);
    fclose(file2);

    file1 = fopen("file1.txt", "w");
    if (file1 == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    fclose(file1);

    return 0;

}