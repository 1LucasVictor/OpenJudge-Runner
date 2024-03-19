#include <stdio.h>
 
int main(void)
{
    int i, j, n, tmp;
    char s;
    int card[4][13];
    for(i=0; i<4; i++){
        for(j=0; j<13; j++)
            card[i][j] = 0;
    }
     
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%s%d", &s, &tmp);
        //printf("%c %d\n",s,  tmp);
         
        if(s == 'S')
            card[0][tmp-1] = 1;
        else if(s == 'H')
            card[1][tmp-1] = 1;
        else if(s == 'C')
            card[2][tmp-1] = 1;
        else
            card[3][tmp-1] = 1;
         
    }
    for(i=0; i<4; i++){
        for(j=0; j<13; j++){
            if(card[i][j] == 0){
                if(i==0)
                    printf("S %d\n", j+1);
                else if(i==1)
                    printf("H %d\n", j+1);
                else if(i==2)
                    printf("C %d\n", j+1);
                else
                    printf("D %d\n", j+1);
                }
        }
    }
    return 0;
}