%{
#include <stdio.h>
int chars = 0, words = 0, lines = 0;
%}

%%
"//".*                      ;   
"/*"([^*]|[\r\n]|"*"[^/])*"*/"   ;

[ \t]+                      ;

\n                          { lines++; }

[A-Za-z_][A-Za-z0-9_]*      { words++; chars += yyleng; }

.                           { chars++; }

%%

int main()
{
    printf("Enter C program (Press Ctrl+D to stop):\n");
    yylex();

    printf("\nCharacters = %d\n", chars);
    printf("Words      = %d\n", words);
    printf("Lines      = %d\n", lines);
    return 0;
}

int yywrap(){ return 1; }
