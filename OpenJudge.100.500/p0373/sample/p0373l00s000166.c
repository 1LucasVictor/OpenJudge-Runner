#include <stdio.h>
#include <stdlib.h>

typedef struct _data_st
{
    int rows, columns;
    struct _data_st *next;
} data_st;

int main(int argc, char *argv[])
{
    data_st *head = NULL, *tail = NULL;
    for (int rows, columns; scanf("%d %d", &rows, &columns) == 2 && (rows || columns);)
    {
        data_st *data = (data_st *)malloc(sizeof(data_st));
        *data = (data_st){.rows = rows, .columns = columns, .next = NULL};
        head = head ?: data;
        if (tail)
        {
            tail->next = data;
        }
        tail = data;
    }
    while (head)
    {
        data_st *data = head;
        head = head->next;
        for (int row = 0; row < data->rows; ++row)
        {
            const char c = (!row || row == data->rows - 1) ? '#' : '.';
            printf("#");
            for (int column = 1; column < data->columns - 1; ++column)
            {
                printf("%c", c);
            }
            printf("#\n");
        }
        printf("\n");
        free(data);
    }
    tail = NULL;
    return 0;
}

