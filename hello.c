#include "hello.h"

int
main(int argc, char **argv)
{
        /* variable declarations */
        int ret;
        char *name;

        /* checking for possible error */
        if (argc < 2) name = "World!";
        /* function body */
        else name = argv[1];
        ret = hello(name);

        if (ret == 0) exit(EXIT_SUCCESS);
        else if (ret == 1) {
                printf("Try './hello <your name>' next time\n");
                exit(EXIT_SUCCESS);
        }
        exit(EXIT_FAILURE);
}

int
hello(char *name)
{
        printf("Hello %s\n", name);

        if (strcmp("World!", name) == 0) return 1;
        return 0;
}