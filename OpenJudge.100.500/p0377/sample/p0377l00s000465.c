#include <stdio.h>
 
int main(void)
{
    int n, card[4][13] = {0};
    int i, j, c, d;
    char m;
 
 
    scanf("%d", &n);
 
    for(i=0;i<n;i++){
        scanf(" %c %d", &m, &d);
 
        switch(m){
            case 'S' : card[0][d-1] = 1;
                        break;
            case 'H' : card[1][d-1] = 1;
                        break;
            case 'C' : card[2][d-1] = 1;
                        break;
            case 'D' : card[3][d-1] = 1;
                        break;
        }
    }
 
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(card[i][j] == 0){
                switch(i){
                    case 0 : printf("S %d\n", j+1);
                            break;
                    case 1 : printf("H %d\n", j+1);
                            break;
                    case 2 : printf("C %d\n", j+1);
                            break;
                    case 3 : printf("D %d\n", j+1);
                            break;
                }
            }
        }
    }
 
    return 0;
}