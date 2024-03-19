#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define PACKAGES_NUM_MIN    (1)
#define PACKAGES_NUM_MAX    (100000)
#define TRUCKS_NUM_MIN  (1)
#define TRUCKS_NUM_MAX  (100000)
#define PACKAGE_WEIGHT_NIN  (1)
#define PACKAGE_WEIGHT_NAX  (10000)
#define STR_SIZE    (7)
#define SUCCESS     (0)
#define FAILURE     (-1)

typedef enum
{
    LINE_FEED,
    BLANK,
    DELIMITER_ERROR
}DELIMITER_INFO;

int get_maximum_loading_capacity(void);
DELIMITER_INFO get_int(int *num, int min, int max);
DELIMITER_INFO get_str(char *p_str, int min, int max);
int judge_constraint(int test_num, int min, int max);


int main(void)
{
    printf("%d\n", get_maximum_loading_capacity());
    
    return SUCCESS;
}



int get_maximum_loading_capacity(void)
{
    int package_num;
    int truck_num;
    int package[PACKAGES_NUM_MAX];
    int package_cnt;
    int truck_cnt;
    int value;
    int tmp;
    int left;
    int right;
    int mid;
    
    
    if(get_int(&package_num, PACKAGES_NUM_MIN, PACKAGES_NUM_MAX) != BLANK)
    {
        return FAILURE;
    }
    
    if(get_int(&truck_num, TRUCKS_NUM_MIN, TRUCKS_NUM_MAX) != LINE_FEED)
    {
        return FAILURE;
    } 

    for(package_cnt = 0; package_cnt < package_num; package_cnt++)
    {
        if(get_int(&package[package_cnt], PACKAGE_WEIGHT_NIN, PACKAGE_WEIGHT_NAX) != LINE_FEED)
        {
            return FAILURE;
        }
    }
    
    left = 0;
    right = PACKAGE_WEIGHT_NAX * PACKAGES_NUM_MAX;

    while(right - left > 1)
    {
        mid = (left + right) / 2;
        package_cnt = 0;
        for(truck_cnt = 1; truck_cnt <= truck_num; truck_cnt++)
        {
            tmp = mid;
             for(; package_cnt < package_num; package_cnt++)
             {
                tmp -= package[package_cnt];
                if(tmp < 0)
                {
                    break;
                }
             }
        }
        if(package_cnt == package_num)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    
    return right;
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
