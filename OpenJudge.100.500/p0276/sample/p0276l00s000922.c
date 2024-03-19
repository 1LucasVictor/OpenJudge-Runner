#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN       (1)
#define MAX       (100)

typedef enum
{
    ERROR  =-1,
    SUCCESS= 0
} ResultType;

static void initMatrix(int);
static void convertListToMatrix(int);
static void printMatrix(int);
static ResultType checkRangeOfNum(int, int, int);


int adjacentList[MAX][MAX + 1];
int adjacentMatrix[MAX][MAX];

int main(void)
{

    int i, j, n, tmp;
    ResultType eResult;

    /* input line 1 */
    scanf("%d",&n);
    eResult = checkRangeOfNum(n, MIN, MAX);
    if(eResult < SUCCESS)
    {
        printf("Err: %d is out of range.", n);
        return eResult;
    }

    /* input line from 2 to n+1 */
    for(i=0; i<n; i++)
    {
        /* 1st number (vertex) */
        scanf("%d",&tmp);

        /* 2nd number (degree) */
        scanf("%d",&adjacentList[i][0]);
        eResult = checkRangeOfNum(adjacentList[i][0], 0, n);
        if(eResult < SUCCESS)
        {
            printf("Err: %d is out of range.", adjacentList[i][0]);
            return eResult;
        }

        /* after that */
        for(j=1; j<=adjacentList[i][0]; j++)
        {
            scanf("%d",&adjacentList[i][j]);
            eResult = checkRangeOfNum(adjacentList[i][j], MIN, n);
            if(eResult < SUCCESS)
            {
               printf("Err: %d is out of range.", adjacentList[i][0]);
                return eResult;
            }
        }
    }

    /* initialize Matrix */
    initMatrix(n);

    /* convert List to Matrix */
    convertListToMatrix(n);

    /* print Matrix */
    printMatrix(n);

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

static void initMatrix(int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            adjacentMatrix[i][j] = 0;
        }
    }
}

static void convertListToMatrix(int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=1; j<=adjacentList[i][0]; j++)
        {
            adjacentMatrix[i][adjacentList[i][j] - 1] = 1;
        }
    }
}

static void printMatrix(int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", adjacentMatrix[i][j]);
        }
        printf("\n");
    }
}

