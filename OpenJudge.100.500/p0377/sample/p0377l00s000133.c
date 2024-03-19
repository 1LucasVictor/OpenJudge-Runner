#include <stdio.h>

int main(){
    char mk[4]={'S','H','C','D'};
    int c[4][14];
    int n,i,j;
    int m,s;
    char g;
    
    for(i=0;i<4;i++)
        for(j=0;j<14;j++)
            c[i][j]=0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf(" %c %d",&g,&s);
        if(g=='S')m=0;
        if(g=='H')m=1;
        if(g=='C')m=2;
        if(g=='D')m=3;
        c[m][s]=1;
    }
    for(i=0;i<4;i++){
        for(j=1;j<14;j++){
            if(c[i][j]==0)printf("%c %d\n",mk[i],j);
        }
    }
    
return 0;
}