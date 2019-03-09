#define TOKEN_BUFSIZE 10
#define TOKEN_DELIM " \t\r\n\a"

char *sh_get_line();
char **sh_split_line(char * line);
