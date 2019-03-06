#include <stdio.h>

char *sh_get_line()
{
    char *line = NULL;
    size_t len = 0;

    getline(&line, &len, stdin);

    return line;
}
