#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool bExists = false;
    int data[5], dist;

    scanf("%d", &data[0]);
    scanf("%d", &data[1]);
    scanf("%d", &data[2]);
    scanf("%d", &data[3]);
    scanf("%d", &data[4]);
    scanf("%d", &dist);

    for(int i = 4 ; i >= 0 ; i--)
    {
        for (int j = 0 ; j < 5 ; j++)
        {
            if( i == j ) continue;
            if( j > i) continue;
            if( data[i] - data[j] > dist )
            {
                bExists = true;
            }
        }
    }

    if(bExists)
    {
        printf(":(");
    }
    else
    {
        printf("Yay!");
    }
    return 0;
}