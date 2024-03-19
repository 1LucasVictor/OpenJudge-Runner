#include <stdio.h>
#include <math.h>
  
#define ELEMENT_CNT_MIN (1)
#define ELEMENT_CNT_MAX (10000)
#define ELEMENT_MIN (2)
#define ELEMENT_MAX (100000000)
#define FAILUER (-1)
#define SUCCESS (0)
#define FUNC_TRUE  (1)
#define FUNC_FALSE (0)
  
int get_int_sequence(int *p_num, int min, int max, int size);
int get_int(int *p_num, int min, int max);
int judge_constraint(int test_num, int min, int max);
int put_prime_cnt_in_list(int *p_num, int size);
int is_prime(int x);
  
int main(void){
      
    int element_num;
    int element[ELEMENT_CNT_MAX];
      
    if(get_int(&element_num, ELEMENT_CNT_MIN, ELEMENT_CNT_MAX) == FAILUER)
    {
        return FAILUER ;
    }
      
    if(get_int_sequence(&element[0], ELEMENT_MIN, ELEMENT_MAX, element_num) == FAILUER)
    {
        return FAILUER ;
    }
      
    printf("%d\n", put_prime_cnt_in_list(&element[0], element_num));
      
    return SUCCESS;
}
  
int is_prime(int x)
{
    int i;
      
    if(x == 2)
    {
        return FUNC_TRUE;
    }
    if((x < 2) || (x % 2 == 0))
    {
        return FUNC_FALSE;
    }
    /* target is odd num >= 3 */
    i = 3;
    while(i <= sqrt(x))
    {
        if(x % i == 0)
        {
            return FUNC_FALSE;
        }
        i += 2;
    }
      
    return FUNC_TRUE;
}
  
int put_prime_cnt_in_list(int *p_num, int size)
{
    int i;
    int cnt = 0;
      
    for(i = 0; i < size; i++)
    {
        if(is_prime(p_num[i]) == FUNC_TRUE)
        {
            cnt++;
        }
    }
      
    return cnt;
}
  
  
int get_int_sequence(int *p_num, int min, int max, int size)
{
    int i;
      
    for(i = 0; i < size; i++)
    {
        if(get_int(&p_num[i], min, max) == FAILUER)
        {
            return FAILUER;
        }
    }
      
    return SUCCESS;
}
  
int get_int(int *p_num, int min, int max)
{
    scanf("%d", p_num);
      
    if(judge_constraint(*p_num, min, max) == FAILUER)
    {
        return FAILUER;
    }
      
    return SUCCESS;
}
int judge_constraint(int test_num, int min, int max)
{
    if(test_num < min || test_num > max)
    {
        return FAILUER;
    }
      
    return SUCCESS;
}