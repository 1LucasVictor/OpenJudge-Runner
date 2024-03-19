#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    
    int Cards[4][13],i,j,n,number;
    char suit;
    
    for (i = 0; i < 4; i++) {
        for (j =0 ; j < 13; j++) {
            Cards[i][j] = 1;
        }
    }

    scanf("%d",&n);
    
    for (i = 0; i < n*2; i++) {
        
        scanf("%c %d",&suit,&number);
        if(suit == 'S') {
            Cards[0][number-1] = 0;
        } else if (suit == 'H') {
            Cards[1][number-1] = 0;
        } else if (suit == 'C') {
            Cards[2][number-1] = 0;
        }  else if (suit == 'D') {
            Cards[3][number-1] = 0;
        }
        
    }
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 13; j++) {
            
            if (Cards[i][j] == 1) {
                
                if (i == 0) {
                    printf("S ");
                } else if (i == 1) {
                    printf("H ");
                } else if (i == 2) {
                    printf("C ");
                } else if (i == 3) {
                    printf("D ");
                }
                
                printf("%d\n",j+1);
            }
        }
    }
    
    return 0;
}