#include <stdio.h>
#define FREE 0
#define NOT_FREE 1
#define N 8
int putQueen(int);
int col[8],row[8],dpos[15],dneg[15],p[8][8];
int main(void){
    int n,i,j,k;
    for(i=0;i<8;i++){
        col[i]=FREE;
        row[i]=FREE;
        for(j=0;j<8;j++){
            p[i][j]=FREE;
        }
    }
    for(i=0;i<15;i++){
        dpos[i]=FREE;
        dneg[i]=FREE;
    }
    scanf("%d",&n);
    for(k=0;k<n;k++){
        scanf("%d%d",&i,&j);
        p[i][j] = NOT_FREE;
        row[i] = NOT_FREE;
        col[j] = NOT_FREE;
        dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    }
    k = putQueen(0);
    
    
    return 0;
}

int putQueen(int i){
    int j=0,a,b;
    if(i==N){
        for(a=0;a<N;a++){
        for(b=0;b<N;b++){
            if(p[a][b]==FREE){
                printf(".");
            }
            else{
                printf("Q");
            }
        }
        printf("\n");
    }
        return 0;
    }
    if(row[i] == NOT_FREE)putQueen(i+1);
    else{
    for(j = 0; j<N;j++){
        if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE){
            continue;
        }
        //row[i] = j;
        col[j] = dpos[i+j] = dneg[i-j+N-1] = p[i][j]= NOT_FREE;
        putQueen(i+1);
        col[j] = dpos[i+j] = dneg[i-j+N-1] = p[i][j] = FREE;
        }
    }
}