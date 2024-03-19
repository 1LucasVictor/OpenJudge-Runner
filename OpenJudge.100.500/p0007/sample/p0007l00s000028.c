#include <stdio.h>

int main(void)
{
    int n;
    int i,j,k,l;
    int ij,ijk;
    int C[50];
    int count;

    
    while(scanf("%d", &n) != EOF){
        count = 0;
        for (i = 0; i <= 9; i++){
            for (j = 0; j <= 9; j++){
                ij = i + j;
                for (k = 0; k <= 9; k++){
                    ijk = ij + k;
                    for (l = 0; l <= 9; l++){
                        if (ijk + l == n){
                            count++;
                        }
                    }
                    
                }
            }
        }
        printf("%d\n", count);      
    }

    return (0);
}
