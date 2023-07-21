#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convertToTitle(int columnNumber) {
    // Calculate the length of the column title
    int len = 0;
    int temp = columnNumber;
    while (temp) {
        len++;
        temp = (temp - 1) / 26;
    }

    // Allocate memory for the column title string
    char* title = (char*)malloc((len + 1) * sizeof(char));
    title[len] = '\0';

    // Convert the column number to its corresponding title
    while (len > 0) {
        len--;
        title[len] = 'A' + ((columnNumber - 1) % 26);
        columnNumber = (columnNumber - 1) / 26;
    }

    return title;
}

int main() {
    int columnNumber;
    scanf("%d", &columnNumber);

    char* result = convertToTitle(columnNumber);
    printf("%s\n", result);

    free(result); // Don't forget to free the dynamically allocated memory.

    return 0;
}
