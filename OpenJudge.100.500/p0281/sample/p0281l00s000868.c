#include<stdio.h>
#define MAXNUM 101
#define INF 100000000

int pass[MAXNUM][MAXNUM];

void PrintGraph(int num){
    int i;
    for(i=0; i<num; i++){
        printf("%d %d\n",i,pass[0][i]);
    }
    return;
}

void ShortestPass(int num){
    int i,j,k,cost;
    for(k=0; k<num; k++){
        for(i=0; i<num; i++){
            for(j=0; j<num; j++){
                cost=pass[i][k]+pass[k][j];
                if(cost<pass[i][j])pass[i][j]=cost;
            }
        }
    }
}

int main(){
    int i,j,num,from,to,passnum,weight;

    for(i=0; i<MAXNUM; i++){
        for(j=0; j<MAXNUM; j++){
            if(i==j)pass[i][j]=0;
            else pass[i][j]=INF;
        }
    }

    scanf("%d",&num);
    for(i=0; i<num; i++){
        scanf("%d%d",&from,&passnum);
        for(j=1; j<=passnum; j++){
            scanf("%d%d",&to,&weight);
            pass[from][to] = weight;
        }
    }

    ShortestPass(num);
    PrintGraph(num);
    return 0;
}
