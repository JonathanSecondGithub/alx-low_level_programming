#include <stdio.h>
#include <stdlib.h>
int main(int ac, int *av[])
{
    char *command = NULL;

    while (1)
    {
        printf("$ ");
        getline(&command, &len, stdin);
        printf("%s", command);
        printf("%zu\n", len);

        execve(command, av, NULL);
    }
    free(command);
    return (0);
}