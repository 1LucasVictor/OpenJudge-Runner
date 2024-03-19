#include <stdio.h>

int main(int argc, const char * argv[]) {
    int tr[4][14];
    int n,i,j,c;
    char m,d;
    for(i = 0 ; i < 4 ; i++){
        for(j = 0 ; j < 14 ; j++){
            tr[i][j] = 0;
        }
    }
    scanf("%d",&c);
    for(i = 0 ; i < c ; i++){
        scanf("%c",&d);
        scanf("%c %d",&m,&n);
        if(m == 'S'){
            tr[0][n] = 1;
        }else if(m == 'H'){
            tr[1][n] = 1;
        }else if(m == 'C'){
            tr[2][n] = 1;
        }else if(m == 'D'){
            tr[3][n] = 1;
        }
    }
    for(j = 1 ; j < 14 ; j++){
        if(tr[0][j] != 1){
            printf("S %d\n",j);
        }
    }
    for(j = 1 ; j < 14 ; j++){
        if(tr[1][j] != 1){
            printf("H %d\n",j);
        }
    }
    for(j = 1 ; j < 14 ; j++){
        if(tr[2][j] != 1){
            printf("C %d\n",j);
        }
    }
    for(j = 1 ; j < 14 ; j++){
        if(tr[3][j] != 1){
            printf("D %d\n",j);
        }
    }
    return 0;
}

