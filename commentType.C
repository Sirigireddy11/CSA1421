#include <stdio.h>
#include <string.h>
int main() {
    char line[200];
    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';
    if (strncmp(line, "//", 2) == 0)
        printf("Single-line comment\n");
    else if (strncmp(line, "/*", 2) == 0 && strstr(line, "*/") != NULL)
        printf("Multi-line comment\n");
    else
        printf("Not a comment\n");
    return 0;
}
