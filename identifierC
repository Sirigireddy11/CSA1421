#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char s[100];
    int i = 0;
    printf("Enter code: ");
    fgets(s, 100, stdin);
    while (s[i]) {
        if (isspace(s[i])) { i++; continue; }
        if (s[i]=='/' && s[i+1]=='/') break; // ignore comment
        if (isalpha(s[i])) {
            printf("Identifier\n");
            while (isalnum(s[i])) i++;
            continue;
        }
        if (isdigit(s[i])) {
            printf("Constant\n");
            while (isdigit(s[i])) i++;
            continue;
        }
        if (strchr("+-*/=<>", s[i]))
            printf("Operator\n");
        i++;
    }
    return 0;
}
