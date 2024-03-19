#include<stdio.h>
int main(void){
    int n,i,a,j;
    char s;
    int b[10][20];
    scanf("%d",&n);

    for(i=0;i<10;i++){
        for(j=0;j<20;j++){
            b[i][j]=0;
        }
    }

    for(i=0;i<n;i++){
        scanf(" %c %d",&s,&a);
        if(s=='S'){
            b[0][a]=1;
        }
        else if(s=='H'){
            b[1][a]=1;
        }
        else if(s=='C'){
            b[2][a]=1;
        }
        else{
            b[3][a]=1;
        }
    }

    for(i=0;i<4;i++){
        for(j=1;j<=13;j++){
            if(b[i][j]==0){
                if(i==0){
                    printf("S %d\n",j);
                }
                if(i==1){
                    printf("H %d\n",j);
                }
                if(i==2){
                    printf("C %d\n",j);
                }
                if(i==3){
                    printf("D %d\n",j);
                }
            }
        }
    }


    return 0;
 }