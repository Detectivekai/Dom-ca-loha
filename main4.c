#include <stdio.h>

int main() {
    FILE *file1 = fopen("file1.txt", "r");
    FILE *file2 = fopen("file2.txt", "r");
    FILE *file3 = fopen("file3.txt", "w");

    int num1, num2;
    fscanf(file1, "%d", &num1);
    fscanf(file2, "%d", &num2);

    fprintf(file3, "%d", num1 + num2);

    fclose(file1);
    fclose(file2);
    fclose(file3);
    return 0;
}
