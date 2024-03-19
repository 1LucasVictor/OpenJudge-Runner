#include <stdio.h>
int main()
{
    int card[4][13]={{0}};
    int n,i;
    int num;
    char gara;
    int g,j;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf(" %c",&gara);
        scanf("%d", &num);
        switch (gara) {
            case 'S':
                card[0][num-1]=1;
                break;
            case 'H':
                card[1][num-1]=1;
                break;
            case 'C':
                card[2][num-1]=1;
                break;
            case 'D':
                card[3][num-1]=1;
                break;
            default:
                break;
        }
        
        
    }
    for (j=0; j<4; j++) {
        for (g=0; g<13; g++) {
            switch (j) {
                case 0:
                    if (card[0][g]==0) {
                        printf("S %d\n",g+1);
                    }
                    break;
                case 1:
                    if (card[1][g]==0) {
                        printf("H %d\n",g+1);
                    }
                    break;
                case 2:
                    if (card[2][g]==0) {
                        printf("C %d\n",g+1);
                    }
                    break;
                case 3:
                    if (card[3][g]==0) {
                        printf("D %d\n",g+1);
                    }
                    break;
                default:
                    break;
            }
        }
    }
    
    return 0;
    
}