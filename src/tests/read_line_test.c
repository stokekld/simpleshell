#include <stdio.h>
#include <stdlib.h>

#include "line.h"

int main()
{
    char *line;

    line = sh_get_line();

    if(!line)
	return -1;

    printf("%s\n", line);
    
    free(line); 

    return 0;
}
