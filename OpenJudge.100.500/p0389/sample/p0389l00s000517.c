#include <stdio.h>
#include <string.h>

typedef struct _dataset_st
{
    char str[202];
    int h_total;
} dataset_st;

#define BUFFSIZE 202

int main(int argc, char *argv[])
{
    dataset_st datasets[10] = {};
    int dataset_count = 0;
    for (char line[BUFFSIZE]; dataset_count < 10 && fgets(line, BUFFSIZE, stdin) && strtok(line, "\n") && strcmp(line, "-"); ++dataset_count)
    {
        strtok(line, "\n");
        strcpy(datasets[dataset_count].str, line);
        int total = 0;
        fgets(line, BUFFSIZE, stdin);
        int m;
        sscanf(line, "%d", &m);
        for (int i = 0; i < m; ++i)
        {
            fgets(line, BUFFSIZE, stdin);
            int h;
            sscanf(line, "%d", &h);
            total += h;
        }
        datasets[dataset_count].h_total = total;
    }
    for (dataset_st *elm = datasets, *const end = elm + dataset_count; elm != end; ++elm)
    {
        const int len = strlen(elm->str);
        for (int i = elm->h_total % len, end = i + len; i < end; ++i)
        {
            printf("%c", elm->str[i % len]);
        }
        printf("\n");
    }
    return 0;
}

