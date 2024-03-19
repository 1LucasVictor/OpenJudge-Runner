#include <stdio.h>
int main(void){
    // Your code here!
    int i,j,n,m;
    char ch;
    scanf("%d\n",&n);
    int cards[4][13]={0};
    for(i=0; i<n; i++){
        scanf("%c %d\n",&ch,&m);
        if(ch=='S'){
            cards[0][m-1]=m;
        }else if(ch=='H'){
            cards[1][m-1]=m;
        }else if(ch=='C'){
            cards[2][m-1]=m;
        }else{
            cards[3][m-1]=m;
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<13; j++){
            if(cards[i][j]==0){
                if(i==0){
                    printf("S %d\n",j+1);
                }else if(i==1){
                    printf("H %d\n",j+1);
                }else if(i==2){
                    printf("C %d\n",j+1);
                }else if(i==3){
                    printf("D %d\n",j+1);
                }
            }    
        }
    }
        return 0;
}

