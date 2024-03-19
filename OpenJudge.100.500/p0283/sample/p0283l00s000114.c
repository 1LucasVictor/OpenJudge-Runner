#include<stdio.h>

int a[8][8]={0};

void printtt(){
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(a[i][j]==1)printf("Q");
            else printf(".");
        }
        printf("\n");
    }
}

 int check(int y,int x){
    int i,j;
    for(i=0;i<8;i++){
        if(i!=x && a[y][i]==1)return 0;
    }
    for(i=0;i<8;i++){
        if(i!=y && a[i][x]==1)return 0;
    }
    i=y-1; j=x+1;
    while(i>=0 && j<8){
        if(a[i--][j++]==1)return 0;
    }
    i=y-1; j=x-1;
    while(i>=0 && j>=0){
        if(a[i--][j--]==1)return 0;
    }
    i=y+1; j=x-1;
    while(i<8 && j>=0){
        if(a[i++][j--]==1)return 0;
    }
    i=y+1; j=x+1;
    while(i<8 && j<8){
        if(a[i++][j++]==1)return 0;
    }
    return 1;
}

 int pppp(int d){
    int i;
    for(i=0;i<8;i++){
        if(a[d][i]==1){
            if(!pppp(d+1))return 0;
        }
    }
    if(d==8){
        printtt();
        return 1;
    }

    else {
        for(i=0;i<8;i++){
            if(a[d][i]==0 && check(d,i)){
                a[d][i]=1;
                if(!pppp(d+1)){
                    a[d][i]=0;
                }
            }
        }
    }
    return 0;
}

 int main(){
    int n, i, j;
    int k, l;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d %d",&k,&l);
        a[k][l]=1;
    }

    l = pppp(0);

    return 0;
}

