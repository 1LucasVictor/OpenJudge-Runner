#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,j,num;
    int y=0;
    int trump[4][13]={0};
    char c;
    scanf("%d",&num);
    for(i=0;i<2*num;i++){
        scanf("%c %d",&c,&y);
        if(c=='S'){
            trump[0][y-1]=1;
        }else if(c=='H'){
            trump[1][y-1]=1;
        }else if(c=='C'){
            trump[2][y-1]=1;
        }else if(c=='D'){
            trump[3][y-1]=1;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(trump[i][j]==0){
                switch(i){
                    case 0:
                        printf("S %d\n",j+1);
                        break;
                    case 1:
                        printf("H %d\n",j+1);
                        break;
                    case 2:
                        printf("C %d\n",j+1);
                        break;
                    case 3:
                        printf("D %d\n",j+1);
                        break;
                }
            }
        }
    }
    return 0;
}