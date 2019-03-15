#include <stdio.h>
#include <stdlib.h>

int main()
{
    char **line = NULL;

    line = (char **) malloc(3 * sizeof(char *));

    line[0] = "ls";
    line[1] = "-la";
    line[2] = NULL;

    sh_launch(line);

    return 0;
}
