#include<stdio.h>
#define n 8
void move(int);
void print();
int col[8],row[8],left[15],right[15],A[n][n];

int main(){
    int i,j,k,r,c;
    for(i=0;i<n;i++){
        row[i]=-1;
        col[i]=-1;
    }
    for(i=0;i<2*n-1;i++){
        left[i]=-1;
        right[i]=-1;
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            A[i][j]=-1;
        }
    }

    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d%d",&r ,&c);
        A[r][c]=1;
    }
    move(0);
    return 0;
}
void move(int i){
    int j;
    if(i==n){
        print();
        return;
    }

    for(j=0; j<n;j++){
        if( left[i-j+n-1]==1 || right[i+j]==1 || col[j]==1)continue;
        row[i]=j;
        col[j]=right[i+j]=left[i-j+n-1]=1;
        move(i+1);
        row[i]=col[j]=right[i+j]=left[i-j+n-1]=-1;


    }
}
void print(){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(A[i][j]==1){
                if(row[i]!=j)return;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(row[i]==j)printf("Q");
            else printf(".");
        }
        printf("\n");

    }

}
