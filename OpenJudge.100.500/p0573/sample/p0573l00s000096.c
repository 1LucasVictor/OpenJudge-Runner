#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void)
{
    char array[5];
    char swap;
    int c,d,n=4,test=0;
    scanf("%s",array);
    for (c = 0 ; c < n - 1; c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (array[d] > array[d+1]) /* For decreasing order use < */
            {
                swap       = array[d];
                array[d]   = array[d+1];
                array[d+1] = swap;
            };
            
        };
    };
    if(array[0]!=array[1]){
        test=-1;
    };
    if(array[2]!=array[3]){
        test=-1;
    };
    if(array[0]==array[2]){
        test=-1;
    };
    if(test==0){
        printf("Yes");
    }
    else{
        printf("No");
    };
    return 0;
};