#include <stdio.h>
#include <stdlib.h>

typedef struct _dataset_st
{
    int n, x;
    struct _dataset_st *next;
} dataset_st;

#define min(a, b) ((a) < (b) ? (a) : (b))

int get_combination_count(dataset_st *dataset)
{
    int count = 0;
    const int first_bound = min(dataset->n - 1, (dataset->x - 3) / 3 + 1); /* i+(i+1)+(i+2) <= dataset->x */
    for (int i = 1; i < first_bound; ++i)
    {
        const int second_bound = min(dataset->n, (dataset->x - i - 1) / 2 + 1); /* i+j+(j+1) <= dataset->x */
        for (int j = i + 1; j < second_bound; ++j)
        {
            count += !!(dataset->x - i - j <= dataset->n);
        }
    }
    return count;
}

int main(int argc, char *argv[])
{
    dataset_st *head = NULL, *tail = NULL;
    for (int n, x; scanf("%d %d", &n, &x) == 2 && (n || x);)
    {
        dataset_st *dataset = (dataset_st *)malloc(sizeof(dataset_st));
        if (!dataset)
        {
            break;
        }
        *dataset = (dataset_st){.n = n, .x = x};
        head = head ?: dataset;
        if (tail)
        {
            tail->next = dataset;
        }
        tail = dataset;
    }
    while (head)
    {
        dataset_st *dataset = head;
        head = head->next;
        printf("%d\n", get_combination_count(dataset));
        free(dataset);
    }
    tail = NULL;
    return 0;
}

