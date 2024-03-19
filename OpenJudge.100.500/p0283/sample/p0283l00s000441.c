#include<stdio.h>
#define NUM 8
#define FREE -1
#define NOT 1

void recursive(int);
void print();
    
int chess[NUM][NUM];
int row[NUM];
int col[NUM];
int dpos[2*NUM-1];
int dneg[2*NUM-1];

int main(){
    int k,r,c,i,j;

    for(i=0;i<NUM;i++){
        row[i]=FREE;
        col[i]=FREE;
    }
    for(i=0;i<2*NUM-1;i++){
        dpos[i]=FREE;
        dneg[i]=FREE;
    }
    for(i=0;i<NUM;i++){
        for(j=0;j<NUM;j++){
            chess[i][j]=0;
        }
    }

    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d%d",&r,&c);
        chess[r][c]=1;
    }



    for(i=0;i<8;i++){
        for(j=0;j<8;j++){

        }
    }

    recursive(0);
    return 0;
}

void recursive(int i){
    int j;
    if(i==NUM){
        print();
        return;
    }
    for(j=0;j<NUM;j++){
        if(NOT==col[j] || NOT==dpos[i+j] || NOT==dneg[i-j+NUM-1]) continue;
        row[i]=j;//Q配置
        col[j]=dpos[i+j]=dneg[i-j+NUM-1]=NOT; //Q配置
        recursive(i+1);
        row[i] = col[j] = dpos[i + j] = dneg[i - j + NUM - 1] =FREE;
    }
}

void print(){
    int i,j;
    for(i=0;i<NUM;i++){
        for(j=0;j<NUM;j++){
            if(chess[i][j]==1){
                if(row[i]!=j)return;
            }
        }
    }
    for(i=0;i<NUM;i++){
        for(j=0;j<NUM;j++){
            if(row[i]==j) printf("Q");
            else printf(".");
        }
        printf("\n");
    }
}

