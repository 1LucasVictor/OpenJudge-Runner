#include <stdio.h>
int main(void){
    
    int cards[128][14];
    int i, j, n, num;
    unsigned char x;
        
    scanf("%d",&n);
    
    for(i = 1; i <=n+1; i++) {
        scanf("%c %d\n", &x, &num);
        if(x=='S') cards[1][num] = 1;
        if(x=='H') cards[2][num] = 1;
        if(x=='C') cards[3][num] = 1;
        if(x=='D') cards[4][num] = 1;
    }
    
    for(i=1;i<=4;i++){
        for(j=1;j<=13;j++){
            if(i==1&&cards[i][j]==0) printf("S %d\n",j);
            else if(i==2&&cards[i][j]==0) printf("H %d\n",j);
            else if(i==3&&cards[i][j]==0) printf("C %d\n",j);
            else if(i==4&&cards[i][j]==0) printf("D %d\n",j);
        }
    }
    return 0;
}

