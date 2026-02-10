#include <stdio.h>
int main() 
{
    char c;
    int ws = 0, nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t')
            ws++;
        else if (c == '\n')
            nl++;
    }
    printf("Whitespaces = %d\nNewlines = %d", ws, nl);
    return 0;
}
