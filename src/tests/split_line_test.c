#include <stdio.h>

#include "line.h"

int main()
{
    char *line;
    char **tokens;
    int position = 0;

    line = sh_get_line();

    if(!line)
	return -1;

    tokens = sh_split_line(line);

    if(!tokens)
	return -1;

    while(tokens[position] != NULL)
    {
	printf("%s\n", tokens[position]);
	position++;
    }

    return 0;
}
