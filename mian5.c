#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r");
    FILE *newFile = fopen("newFile.txt", "w");
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            fputc(' ', newFile);
        } else {
            fputc(ch, newFile);
        }
    }

    fclose(file);
    fclose(newFile);
    return 0;
}
