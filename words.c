#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char c;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    fp = fopen("input.txt", "r");  // Open your file
    if (!fp) {
        printf("File not found.\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        charCount++;

        if (c == '\n')
            lineCount++;

        if (isspace(c))
            inWord = 0;
        else if (!inWord) {
            wordCount++;
            inWord = 1;
        }
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", charCount, wordCount, lineCount);
    return 0;
}
