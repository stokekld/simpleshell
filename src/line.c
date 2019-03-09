#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "line.h"

char *sh_get_line()
{
    char *line = NULL;
    size_t len = 0;

    getline(&line, &len, stdin);

    return line;
}

char **sh_split_line(char * line)
{
    char **tokens = NULL;
    char *token = NULL;
    int position = 0;

    tokens = (char **) malloc(TOKEN_BUFSIZE * sizeof(char*));

    token = strtok(line, TOKEN_DELIM);

    while(token != NULL)
    {
	tokens[position] = token;
	token = strtok(NULL, TOKEN_DELIM);
	position++;
    }

    tokens[position] = NULL;

    return tokens;
}
