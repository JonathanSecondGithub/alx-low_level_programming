#include <stdio.h>
#include <stdlib.h>
int main(int ac, int *av[])
{
    char *command = NULL;
    size_t len = 0;
    char *tkn;

    while (1)
    {
        printf("$ ");
	getline(&command, &len, stdin);

        tkn = strtok(command, "\n");
        execve(tkn[0], tkn, NULL);
    }
    free(command);
    return (0);
}
