#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    char c, b[20];
    int i;

    if (!fp) return 0;

    while ((c = fgetc(fp)) != EOF) {

        if (isspace(c)) continue;

        if (c == '/') {
            char n = fgetc(fp);
            if (n == '/') while (fgetc(fp) != '\n');
            else if (n == '*')
                while (!((c = fgetc(fp)) == '*' && fgetc(fp) == '/'));
            else printf("Operator: /\n");
            continue;
        }

        if (isalpha(c) || c == '_') {
            i = 0;
            b[i++] = c;
            while (isalnum(c = fgetc(fp)) || c == '_') b[i++] = c;
            b[i] = '\0';
            printf("Identifier: %s\n", b);
            ungetc(c, fp);
        }

        else if (isdigit(c)) {
            i = 0;
            b[i++] = c;
            while (isdigit(c = fgetc(fp))) b[i++] = c;
            b[i] = '\0';
            printf("Constant: %s\n", b);
            ungetc(c, fp);
        }

        else if (c=='+'||c=='-'||c=='*'||c=='='||c=='<'||c=='>' )
            printf("Operator: %c\n", c);
    }

    fclose(fp);
    return 0;
}
