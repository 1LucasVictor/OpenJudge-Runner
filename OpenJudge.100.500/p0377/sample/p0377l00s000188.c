#include<stdio.h>
int main(){
    int c,i,b,card[4][13]={0};
    char a;
    scanf("%d",&c);

    for(i=0;i<=c*2;i++){
        scanf("%c %d",&a,&b);
        switch(a){
            case 'S':
            card[0][b-1]=b;
            break;
            case 'H':
            card[1][b-1]=b;
            break;
            case 'C':
            card[2][b-1]=b;
            break;
            case 'D':
            card[3][b-1]=b;
            break;
        }
    }

    for(i=0;i<4;i++){
        for(int j=1;j<=13;j++){
            if(card[i][j-1]==0){
                switch(i){
                    case 0:
                    printf("S %d\n",j);
                    break;
                    case 1:
                    printf("H %d\n",j);
                    break;
                    case 2:
                    printf("C %d\n",j);
                    break;
                    case 3:
                    printf("D %d\n",j);
                    break;
                }
            }
        }
    }
    
    
    return 0;
}
