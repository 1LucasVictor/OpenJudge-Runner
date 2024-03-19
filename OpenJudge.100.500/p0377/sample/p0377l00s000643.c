#include<stdio.h>
int main(){
    int a[4][14],n,i,j;
    scanf("%d",&n);
     
    for(i=0;i<4;i++){
        for(j=1;j<14;j++){
            a[i][j]=0;
        }
    }
    int c;
    scanf("%d",&c);
    for(i=0;i<n;i++){
        char b;
        int c;
        scanf("%c %d\n",&b,&c);
        if(b=='S'){
            a[0][c]=1;
        }else if(b=='H'){
            a[1][c]=1;
        }else if(b=='C'){
            a[2][c]=1;
        }else if(b=='D'){
            a[3][c]=1;
        }
    }
     
    char p[] = {'S','H','C','D'};
    for(i=0;i<4;i++){
        for(j=1;j<14;j++){
            if(a[i][j]==0){
                printf("%c %d\n",p[i],j);
            }
        }
    }
     
    return 0;
}