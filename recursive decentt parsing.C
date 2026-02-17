#include <stdio.h>
#include <string.h>

char input[20];
int i = 0;

void E();
void E1();
void T();
void T1();
void F();

void E() {
    T();
    E1();
}

void E1() {
    if(input[i] == '+') {
        i++;
        T();
        E1();
    }
}

void T() {
    F();
    T1();
}

void T1() {
    if(input[i] == '*') {
        i++;
        F();
        T1();
    }
}

void F() {
    if(input[i] == 'i' && input[i+1] == 'd') {
        i += 2;
    }
    else if(input[i] == '(') {
        i++;
        E();
        if(input[i] == ')')
            i++;
    }
}

int main() {
    printf("Enter input string: ");
    scanf("%s", input);

    E();

    if(i == strlen(input))
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
