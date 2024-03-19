

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int size;
    int degree;
    scanf("%d", &size);
    int matrix[size][size];
    
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            matrix[i][j]=0;
        }
    }
    
    int temp, a;
    for(int i=0;i<size;i++)
    {
        scanf("%d %d",&temp, &degree);
        for(int j=0;j<degree;j++)
        {
            scanf("%d", &a);
            matrix[i][a-1]=1;
        }
    }
    
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(j!=size-1)
                printf("%d ", matrix[i][j]);
            else
                printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}


