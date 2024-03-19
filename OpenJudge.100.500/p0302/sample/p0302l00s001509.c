#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define INPUI_STR_SIZE_MIN (1)
#define INPUT_STR_SIZE_MAX (12)
#define STR_SIZE (INPUT_STR_SIZE_MAX + 1)
#define INSTRUCTION_NUM_MIN (1)
#define INSTRUCTION_NUM_MAX (1000000)
#define FAILURE (-1)
#define SUCCESS (0)
#define COMMAND_NUM (2)

typedef enum
{
    LINE_FEED,
    BLANK,
    DELIMITER_ERROR
}DELIMITER_INFO;

typedef enum command_info
{
    CMMAND_ERROR = -1,
    INSERT,
    FIND
}COMMAND_INFO;

typedef struct
{
    char item[STR_SIZE];
}DICTIONARY;


COMMAND_INFO get_command_id(char *str);
int process_command(int num);
int insesrt_dictionary(char *str);
int find_dictionary(char *str);
DELIMITER_INFO get_int(int *num, int min, int max);
DELIMITER_INFO get_str(char *p_str, int min, int max);
int judge_constraint(int test_num, int min, int max);

DICTIONARY g_dictionary[INSTRUCTION_NUM_MAX];
unsigned int g_current = 0;

int (*exec_command[])(char *str) = {insesrt_dictionary, find_dictionary};
const char *command_id_tbl[] =
{
    "insert", "find"
};

int main(void)
{
    int instruction_num;
    
    if(get_int(&instruction_num, INSTRUCTION_NUM_MIN, INSTRUCTION_NUM_MAX) != LINE_FEED)
    {
        return FAILURE;
    }
    
    if(process_command(instruction_num) == FAILURE)
    {
        return FAILURE;
    }
    
    return SUCCESS;
}

COMMAND_INFO get_command_id(char *str)
{
    char command[STR_SIZE];
    unsigned int command_idx;
    DELIMITER_INFO rslt;

    rslt = get_str(command, INPUI_STR_SIZE_MIN, STR_SIZE);
    if(rslt == DELIMITER_ERROR)
    {
        return CMMAND_ERROR;
    }

    for(command_idx = 0; command_idx < COMMAND_NUM; command_idx++)
    {
        if(strcmp(command, command_id_tbl[command_idx]) == 0)
        {
            break;
        }
    }
    
    if(rslt == BLANK)
    {
        if(get_str(&str[0], INPUI_STR_SIZE_MIN, STR_SIZE) == LINE_FEED)
        {
            return command_idx;
        }
    }
    
    return CMMAND_ERROR;
}

int process_command(int num)
{
    char str[STR_SIZE];
    unsigned int i;
    COMMAND_INFO rslt;
    
    for(i = 0; i < num; i++)
    {
        if((rslt = get_command_id(str)) == CMMAND_ERROR)
        {
            return FAILURE;
        }
        if(rslt != CMMAND_ERROR)
        {
            if(exec_command[rslt](str) == FAILURE)
            {
                return FAILURE;
            }
        }
    }
    
    return SUCCESS;
}

int insesrt_dictionary(char *str)
{
    unsigned int i;
    unsigned int str_size = strlen(str);
    /*
    if(g_current >= INSTRUCTION_NUM_MAX)
    {
        return FAILURE;
    }
    
    for(i = 0; i < str_size; i++)
    {
        if(!(str[i] == 'A' || str[i] == 'C' || str[i] == 'G' || str[i] == 'T'))
        {
            return FAILURE;
        }
    }
    */
    
    strcpy(g_dictionary[g_current].item, str);
    g_current++;
    
    return SUCCESS;
}

int find_dictionary(char *str)
{
    unsigned int locator = 0;
    
    for(locator = 0; locator < g_current; locator++)
    {
        if(strcmp(&g_dictionary[locator].item[0], &str[0]) == 0)
        {
            printf("yes\n");
            return SUCCESS;
        }
    }
    printf("no\n");
    
    return SUCCESS;
}

DELIMITER_INFO get_int(int *num, int min, int max)
{
    char str[STR_SIZE];
    DELIMITER_INFO delimiter;
    unsigned int i;
    
    delimiter = get_str(str, min, max);
    
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

DELIMITER_INFO get_str(char *p_str, int min, int max)
{
    unsigned int cnt = 0;
    int ch;
    
    while((ch = getchar()) != -1)
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
                        
        p_str[cnt] = ch;
        cnt++;
        
        if(judge_constraint(cnt + 1, min, max) == -1)
        {
            break;
        }
    }
    
    return DELIMITER_ERROR;
}

int judge_constraint(int test_num, int min, int max)
{
    if(test_num < min || test_num > max)
    {
        return FAILURE;
    }
    
    return SUCCESS;
}
