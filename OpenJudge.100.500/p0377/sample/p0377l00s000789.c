#include <stdio.h>

int main(void){
    int n,E,i,s,j;
    int a[4][14];
    char e,moji[4];
    
    scanf("%d",&n);
    
    for(i=0;i<4;i++){
        for(j=1;j<=13;j++){
            a[i][j]=0;
        }
    }
    for(i=0;i<4;i++){
        if(i==0) moji[i]= 'S';
        if(i==1) moji[i]= 'H';
        if(i==2) moji[i]= 'C';
        if(i==3) moji[i]= 'D';
    }
    for(i=0;i<n;i++){
        scanf("%s %d",&e,&s);
        if(e=='S'){
            E=0;
        }
        if(e=='H'){
            E=1;
        }
        if(e=='C'){
            E=2;
        }if(e=='D'){
            E=3;
        }
        a[E][s]=1;
    }
    for(j=0;j<4;j++){
        for(i=1;i<=13;i++){
            if(a[j][i]!=1){
                printf("%c %d\n",moji[j],i);
            }
        }
    }
    return 0;
}