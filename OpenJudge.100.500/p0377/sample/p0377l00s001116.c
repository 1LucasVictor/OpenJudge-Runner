#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n,i,j,c,k;
    int x[4][14];  //二次元配列
    char m, d;
    
    //配列を初期化
    for(i=0; i<4; i++){
        for(j=0; j<14; j++){
            x[i][j]=0;
        }
    }
    
    scanf("%d",&c);
    for(i=0; i<c; i++){
        scanf("%d",&k);  //?
        scanf("%c %d",&m,&n);
        if(m == 'S'){
            x[0][n] = 1;
        }
        if(m == 'H'){
            x[1][n] = 1;
        }
        if(m == 'C'){
            x[2][n] = 1;
        }
        if(m == 'D'){
            x[3][n] = 1;
        }
    }
    
    for(j=1; j<14; j++){
        if(x[0][j] != 1){
            printf("S %d\n",j);
        }
    }
    for(j=1; j<14; j++){
        if(x[1][j] != 1){
            printf("H %d\n",j);
        }
    }
    for(j=1; j<14; j++){
        if(x[2][j] != 1){
            printf("C %d\n",j);
        }
    }
    for(j=1; j<14; j++){
        if(x[3][j] != 1){
            printf("D %d\n",j);
        }
    }
    
    return 0;
}

