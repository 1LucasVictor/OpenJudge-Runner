#include <stdio.h>
int main(void){
    char ch;
    int n,m;
    scanf("%d\n",&n);
    int cards[4][13]={0};
    for(int i=0;i<n;i++){
        scanf("%c %d\n",&ch,&m);
    if(ch=='S'){
        cards[0][m-1]=m;
    }else if(ch=='H'){
        cards[1][m-1]=m;    
    }else if(ch=='C'){
        cards[2][m-1]=m;
    }else if(ch=='D'){
        cards[3][m-1]=m;
    }
    }
    
    for(int k=0;k<4;k++){
        for(int j=0;j<13;j++){
            if(cards[k][j]==0){
                if(k==0){
                    printf("S %d\n",j+1);
                }else if(k==1){
                    printf("H %d\n",j+1);
                }else if(k==2){
                    printf("C %d\n",j+1);
                }else if(k==3){
                    printf("D %d\n",j+1);
                }
            }
            
        }
    }
    return 0;
}
