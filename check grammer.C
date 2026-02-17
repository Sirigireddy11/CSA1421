#include <stdio.h>
#include <string.h>

int i = 0;
char s[20];

void S() {
    if(s[i] == 'a') i++;
}

int main() {
    printf("Enter string: ");
    scanf("%s", s);

    S();

    if(i == strlen(s))
        printf("Valid String\n");
    else
        printf("Invalid String\n");

    return 0;
}
