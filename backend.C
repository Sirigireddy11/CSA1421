#include <stdio.h>
#include <ctype.h>

int main() {
    char expr[100];
    int i;
    float stack[100], num;
    char op;
    int top = -1;

    printf("Enter simple expression (like 2+3*4): ");
    scanf("%s", expr);

    for (i = 0; expr[i] != '\0'; i++) {
        if (isdigit(expr[i])) {
            num = expr[i] - '0';  // convert char to number
            stack[++top] = num;
        } else {
            op = expr[i];
            if (top < 1) {
                printf("Invalid expression\n");
                return 0;
            }
            float b = stack[top--];
            float a = stack[top--];
            switch(op) {
                case '+': stack[++top] = a + b; break;
                case '-': stack[++top] = a - b; break;
                case '*': stack[++top] = a * b; break;
                case '/': stack[++top] = a / b; break;
            }
            printf("Applied operator %c on %g and %g, result: %g\n", op, a, b, stack[top]);
        }
    }

    if (top == 0)
        printf("Final result: %g\n", stack[top]);
    else
        printf("Invalid expression\n");

    return 0;
}
