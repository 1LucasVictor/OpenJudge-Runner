#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MAXLEN = 3;

int main(int argc, const char **argv)
{
    char *contest = NULL;
    contest = (char *) malloc(MAXLEN);

    fscanf(stdin, "%s", contest);

    if ( strcmp(contest, "ABC") == 0 ) fprintf(stdout, "ARC\n");
    if ( strcmp(contest, "ARC") == 0 ) fprintf(stdout, "ABC\n");

    free(contest);
    return 0;
}