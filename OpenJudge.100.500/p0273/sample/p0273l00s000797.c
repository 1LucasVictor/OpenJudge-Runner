#include <string.h>

#define N_MIN       (0)
#define N_MAX       (44)

typedef enum
{
    ERROR  =-1,
    SUCCESS= 0
} ResultType;

static ResultType checkRangeOfNum(int, int, int);
static int fib(int);

int main(void)
{
    int A[45], N;
    ResultType eResult;

    /* input */
    scanf("%d",&N);
    eResult = checkRangeOfNum(N, N_MIN, N_MAX);
    if(eResult < SUCCESS)
    {
        printf("Err: %d is out of range.", N);
        return eResult;
    }

    /* calcurate fib(n)  */
    printf("%d\n", fib(N));

    return SUCCESS;
}

static ResultType checkRangeOfNum(int n, int nMin, int nMax)
{
    if((n < nMin) || (nMax < n))
    {
        return ERROR;
    }
    return SUCCESS;
}

static int fib(int n)
{
    int fib1 = 1;
    int fib2 = 1;
    int tmp, i;

    if(n < 2)
    {
        return 1;
    }
    else
    {
        for(i=2; i<=n; i++)
        {
            tmp  = fib1 + fib2;
            fib1 = fib2;
            fib2 = tmp;
        }
        return tmp;
    }
}

