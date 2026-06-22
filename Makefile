CC = gcc
CFLAGS = -Wall
LEX = flex
LIBS = -lfl

# List of all C programs
C_PROGRAMS = backend check_grammar comment comment_type count_file count_spaces eliminate_left_factoring \
             identifier leading lexical_analyzer operator rd_parser space symbol_table trailing valid_identifier words

# Lex program
LEX_PROGRAM = count_char

ALL = $(C_PROGRAMS) $(LEX_PROGRAM)

all: $(ALL)

# Rule for simple C programs
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Rule for Lex program
$(LEX_PROGRAM): $(LEX_PROGRAM).l
	$(LEX) $(LEX_PROGRAM).l
	$(CC) $(CFLAGS) lex.yy.c -o $(LEX_PROGRAM) $(LIBS)
	rm lex.yy.c

clean:
	rm -f $(ALL)

.PHONY: all clean
