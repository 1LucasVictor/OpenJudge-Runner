#include <stdio.h>

int main(){

    int n;
    int i,j;
    int row,col;
    int num;

    scanf("%d",&n);

    int matrix[n+1][n+1];

    for( i = 0 ; i <= n ; i++ ){
        for( j = 0 ; j <= n ; j++ ){
            matrix[i][j] = 0;
        }
    }

    for( i = 1 ; i <= n ; i++ ){

        scanf("%d",&row);
        scanf("%d",&col);

        for( j = 0 ; j < col ; j++ ){
            scanf("%d",&num);
            matrix[row][num] = 1;
        }

    }

    for( i = 1 ; i <= n ; i++ ){
        for( j = 1 ; j <= n ; j++ ){
            printf("%d",matrix[i][j]);

            if( j != n ){
                printf(" ");
            }

        }
    
       printf("\n");
    
    }


}