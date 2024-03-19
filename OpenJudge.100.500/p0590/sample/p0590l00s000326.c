#include <stdio.h>

void main(void)
{
    int num[5];
    int k;
    int temp, result=0;
    int i, j;

    scanf("%d%d%d%d%d%d", &num[0],&num[1],&num[2],&num[3],&num[4],&k);

    for(i=0; i<3; i++)
    {
        temp = num[0] - num[i + 1];

        if(temp > k)
            result++;
    }

    for(i=1; i<4; i++)
    {
        temp = num[1] - num[i + 1];

        if(temp > k)
            result++;
    }
    
    temp = num[2] - num[3];
    if(temp > k)
        result++;

    temp = num[2] - num[4];
    if(temp > k)
        result++;

    temp = num[3] - num[4];
    if(temp > k)
        result++;

    if(result == 0)
        printf("Yay!");
       
    else
        printf(":(");
}
