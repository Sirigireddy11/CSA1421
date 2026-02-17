#include <stdio.h>
#include <string.h>

struct symbol {
    char name[20];
    char type[10];
} table[10];

int count = 0;

void insert() {
    printf("Enter name and type: ");
    scanf("%s %s", table[count].name, table[count].type);
    count++;
}

void display() {
    printf("\nSymbol Table\n");
    printf("Name\tType\n");
    for(int i = 0; i < count; i++)
        printf("%s\t%s\n", table[i].name, table[i].type);
}

int main() {
    int choice;
    while(1) {
        printf("\n1.Insert 2.Display 3.Exit\n");
        scanf("%d", &choice);

        if(choice == 1) insert();
        else if(choice == 2) display();
        else break;
    }
    return 0;
}
