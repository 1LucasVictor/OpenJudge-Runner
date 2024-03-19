#include <stdio.h>

int main(int argc, const char **argv)
{
    int div = 0, min = 0, max = 0, loop = 0;

    fscanf(stdin, "%d", &div);
    fscanf(stdin, "%d %d", &min, &max);

    for ( loop = min; loop <= max; loop++ )
    {
        if ( loop % div == 0 )
        {
            fprintf(stdout, "OK\n");
            return 0;
        }
    }

    fprintf(stdout, "NG\n");
    return 0;
}