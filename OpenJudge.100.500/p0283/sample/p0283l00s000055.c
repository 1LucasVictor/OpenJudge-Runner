#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define BOARD_SIZE (8)
#define BOARD_INDEX_MAX (7)
#define STR_SIZE   (2)
#define SUCCESS    (0)
#define FAILURE    (-1)


typedef enum
{
    LINE_FEED,
    BLANK,
    DELIMITER_ERROR
}DELIMITER_INFO;

bool search_board_queen(void);
DELIMITER_INFO get_int(int *num, int min, int max);
DELIMITER_INFO get_str(char *p_str, int max);
int judge_constraint(int test_num, int min, int max);


bool board[BOARD_SIZE][BOARD_SIZE];
unsigned int queen_num_status = 0;


void disp_board()
{
    for(int x = 0; x < BOARD_SIZE; x++)
    {
        for(int y = 0; y < BOARD_SIZE; y++)
        {
            if(board[x][y] == true)
            {
                printf("Q");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
}


bool check_put_queen(int put_x, int put_y)
{
    int x, y;
    if(queen_num_status == BOARD_SIZE)
    {
        return false;
    }
    /* vertical */
    for(x = put_x, y = 0; y < BOARD_SIZE; y++)
    {
        if(board[x][y] == true)
        {
            return false;
        }
    }

    /* horizontal */
    for(x = 0, y = put_y; x < BOARD_SIZE; x++)
    {
        if(board[x][y] == true)
        {
            return false;
        }
    }

    /* left up diagonal */
    for(x = put_x, y = put_y; (x >= 0) && (y >= 0); x--, y--)
    {
        if(board[x][y] == true)
        {
            return false;
        }
    }
    

            /* left down diagonal */
    for(x = put_x, y = put_y; (x >= 0) && (y < BOARD_SIZE); x--, y++)
    {
        if(board[x][y] == true)
        {
            return false;
        }
    }
    
        /* right down diagonal */
    for(x = put_x, y = put_y; (x < BOARD_SIZE) && (y < BOARD_SIZE); x++, y++)
    {
        if(board[x][y] == true)
        {
            return false;
        }
    }
            /* right up diagonal */
    for(x = put_x, y = put_y; (x < BOARD_SIZE) && (y >= 0); x++, y--)
    {
        if(board[x][y] == true)
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    int num;
    int x, y;
    
    memset(board, false, BOARD_SIZE * BOARD_SIZE);
    
    get_int(&num, 0, BOARD_SIZE);
    
    for(int i = 0; i < num; i++)
    {
        get_int(&x, 0, BOARD_INDEX_MAX);
        get_int(&y, 0, BOARD_INDEX_MAX);
        board[x][y] = true;
        queen_num_status++;
    }

    search_board_queen();

    disp_board();
    
    return 0;
}

bool search_board_queen(void)
{
    int x,y;
    bool rslt = false;
    
    if(queen_num_status == BOARD_SIZE)
    {
        return true;
    }
    for(x = 0; x < BOARD_SIZE; x++)
    {
        for(y = 0; y < BOARD_SIZE; y++)
        {
            if(check_put_queen(x, y) == true)
            {
                board[x][y] = true;
                queen_num_status++;
                if(search_board_queen() == true)
                {
                    return true;
                }
                else
                {
                    queen_num_status--;
                    board[x][y] = false;
                }
            }
        }
    }
    
    return false;
}


DELIMITER_INFO get_int(int *num, int min, int max)
{
    char str[STR_SIZE];
    DELIMITER_INFO delimiter;
    int i;

    delimiter = get_str(str, max);

    for(i = 0; i < STR_SIZE; i++)
    {
        if(str[i] == '\0')
        {
            break;
        }
        if(!isdigit(str[i]))
        {
            return DELIMITER_ERROR;
        }
    }

    *num = atoi(str);

    if(judge_constraint(*num, min, max) == -1)
    {
        return DELIMITER_ERROR;
    }

    return delimiter;
}

DELIMITER_INFO get_str(char *p_str, int max)
{
    int cnt = 0;
    int ch;
    
    while((ch = getchar()) != EOF)
    {
        if(cnt > 0)
        {
            if(ch == ' ' || ch == '\n')
            {
                p_str[cnt] = '\0';
                if(ch == ' ')
                {
                    return BLANK;
                }
                else
                {
                    return LINE_FEED;
                }
            }
        }
        
        if(judge_constraint(cnt, 0, max) == SUCCESS)
        {
            p_str[cnt] = ch;
            cnt++;
        }
        else
        {
            return DELIMITER_ERROR;
        }
    }
    
    return DELIMITER_ERROR;
}

int judge_constraint(int test_num, int min, int max)
{
    if((test_num < min) || (test_num > max))
    {
        return FAILURE;
    }
    
    return SUCCESS;
}
