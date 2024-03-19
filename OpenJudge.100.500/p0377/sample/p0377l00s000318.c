#include<stdio.h>
int main(void){
    int i,j,k=1,cards[4][14]={0},n,b;
    char a;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %c %d",&a,&b);
        if(a=='S')cards[0][b]=1;
        if(a=='H')cards[1][b]=1;
        if(a=='C')cards[2][b]=1;
        if(a=='D')cards[3][b]=1;
    }
    for(j=0;j<4;j++){
        for(k=1;k<14;k++){
            if(cards[j][k]==0){
                if(j==0)printf("S %d\n",k);
                if(j==1)printf("H %d\n",k);
                if(j==2)printf("C %d\n",k);
                if(j==3)printf("D %d\n",k);
            }
        }
    }
    return 0;
}